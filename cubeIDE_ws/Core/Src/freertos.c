/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * File Name          : freertos.c
  * Description        : Code for freertos applications
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "FreeRTOS.h"
#include "task.h"
#include "main.h"
#include "cmsis_os.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
//micro-rosのためのインクルード
#include <stdbool.h>
#include <rcl/rcl.h>
#include <rcl/error_handling.h>
#include <rclc/rclc.h>
#include <rclc/executor.h>
#include <uxr/client/transport.h>
#include <rmw_microxrcedds_c/config.h>
#include <rmw_microros/rmw_microros.h>
#include <std_msgs/msg/int32.h>
#include <std_msgs/msg/string.h>
#include <geometry_msgs/msg/twist.h>
#include "usart.h"
#include "dma.h"
#include "tim.h"
#include "gpio.h"
// カスタムメッセージのインクルード
#include <custom_test_msgs/srv/add_three_ints.h>
#include <drive_msgs/msg/diff_drive.h>
#include <drive_msgs/msg/omni.h>
#include <drive_msgs/msg/omni_enc.h>
#include <manip_msgs/msg/cmd.h>
#include <manip_msgs/msg/result.h>

//canlibを使うためのinclude
#include "can.h"
#include "CAN_Main.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
typedef StaticTask_t osStaticThreadDef_t;
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
// エラーハンドリングのためのマクロを設定
#define RCCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Aborting.\n",__LINE__,(int)temp_rc);}}
#define RCSOFTCHECK(fn) { rcl_ret_t temp_rc = fn; if((temp_rc != RCL_RET_OK)){printf("Failed status on line %d: %d. Continuing.\n",__LINE__,(int)temp_rc);}}

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */
//micro-rosのメッセージを定義
custom_test_msgs__srv__AddThreeInts_Request req;
custom_test_msgs__srv__AddThreeInts_Response res;
drive_msgs__msg__Omni sub;
manip_msgs__msg__Cmd msub;
std_msgs__msg__String pub;
drive_msgs__msg__OmniEnc enc;

//CANモジュール基盤の設定
NUM_OF_DEVICES num_of_devices;

//mcmdの設定
MCMD_HandleTypedef mcmd4M1_struct;
MCMD_Feedback_Typedef mcmdM1_fb;
MCMD_HandleTypedef mcmd4M2_struct;
MCMD_Feedback_Typedef mcmdM2_fb;
MCMD_HandleTypedef mcmd4M3_struct;
MCMD_Feedback_Typedef mcmdM3_fb;
MCMD_HandleTypedef mcmd4M4_struct;
MCMD_Feedback_Typedef mcmdM4_fb;
MCMD_HandleTypedef mcmd4M5_struct;
MCMD_Feedback_Typedef mcmdM5_fb;
MCMD_HandleTypedef mcmd4M6_struct;
MCMD_Feedback_Typedef mcmdM6_fb;
MCMD_HandleTypedef mcmd4M7_struct;
MCMD_Feedback_Typedef mcmdM7_fb;
MCMD_HandleTypedef mcmd4M8_struct;
MCMD_Feedback_Typedef mcmdM8_fb;

//サーボの設定
CANServo_Param_Typedef servo_param1;
CAN_Device servo_device1;
CANServo_Param_Typedef servo_param2;
CAN_Device servo_device2;

//エアシリの設定
CAN_Device air_device;
/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN Variables */
rcl_publisher_t publisher;
rcl_publisher_t encpublisher;
/* USER CODE END Variables */
/* Definitions for defaultTask */
osThreadId_t defaultTaskHandle;
uint32_t defaultTaskBuffer[ 3000 ];
osStaticThreadDef_t defaultTaskControlBlock;
const osThreadAttr_t defaultTask_attributes = {
  .name = "defaultTask",
  .cb_mem = &defaultTaskControlBlock,
  .cb_size = sizeof(defaultTaskControlBlock),
  .stack_mem = &defaultTaskBuffer[0],
  .stack_size = sizeof(defaultTaskBuffer),
  .priority = (osPriority_t) osPriorityRealtime,
};
/* Definitions for SysCeckTask */
osThreadId_t SysCeckTaskHandle;
uint32_t SysCeckTaskBuffer[ 512 ];
osStaticThreadDef_t SysCeckTaskControlBlock;
const osThreadAttr_t SysCeckTask_attributes = {
  .name = "SysCeckTask",
  .cb_mem = &SysCeckTaskControlBlock,
  .cb_size = sizeof(SysCeckTaskControlBlock),
  .stack_mem = &SysCeckTaskBuffer[0],
  .stack_size = sizeof(SysCeckTaskBuffer),
  .priority = (osPriority_t) osPriorityLow,
};
/* Definitions for MotorRunTask */
osThreadId_t MotorRunTaskHandle;
uint32_t MotorRunTaskBuffer[ 512 ];
osStaticThreadDef_t MotorRunTaskControlBlock;
const osThreadAttr_t MotorRunTask_attributes = {
  .name = "MotorRunTask",
  .cb_mem = &MotorRunTaskControlBlock,
  .cb_size = sizeof(MotorRunTaskControlBlock),
  .stack_mem = &MotorRunTaskBuffer[0],
  .stack_size = sizeof(MotorRunTaskBuffer),
  .priority = (osPriority_t) osPriorityHigh,
};
/* Definitions for EncorderTask */
osThreadId_t EncorderTaskHandle;
uint32_t EncorderTaskBuffer[ 512 ];
osStaticThreadDef_t EncorderTaskControlBlock;
const osThreadAttr_t EncorderTask_attributes = {
  .name = "EncorderTask",
  .cb_mem = &EncorderTaskControlBlock,
  .cb_size = sizeof(EncorderTaskControlBlock),
  .stack_mem = &EncorderTaskBuffer[0],
  .stack_size = sizeof(EncorderTaskBuffer),
  .priority = (osPriority_t) osPriorityHigh,
};

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN FunctionPrototypes */

//このコード固有の変数
bool finishCANsetting = false;//can設定が終わったかどうかのフラグ
float cmd_motor[4] = {0,0,0,0};//モーターの制御値を格納しておく変数

//micro-rosのためのプロトタイプ宣言
bool cubemx_transport_open(struct uxrCustomTransport * transport);
bool cubemx_transport_close(struct uxrCustomTransport * transport);
size_t cubemx_transport_write(struct uxrCustomTransport* transport, const uint8_t * buf, size_t len, uint8_t * err);
size_t cubemx_transport_read(struct uxrCustomTransport* transport, uint8_t* buf, size_t len, int timeout, uint8_t* err);
void * microros_allocate(size_t size, void * state);
void microros_deallocate(void * pointer, void * state);
void * microros_reallocate(void * pointer, size_t size, void * state);
void * microros_zero_allocate(size_t number_of_elements, size_t size_of_element, void * state);

void HAL_CAN_TxMailbox0CompleteCallback(CAN_HandleTypeDef *hcan){
    WhenTxMailbox0_1_2CompleteCallbackCalled();
}

void HAL_CAN_TxMailbox0AbortCallback(CAN_HandleTypeDef *hcan){
    WhenTxMailbox0_1_2AbortCallbackCalled();
}

void HAL_CAN_TxMailbox1CompleteCallback(CAN_HandleTypeDef *hcan){
    WhenTxMailbox0_1_2CompleteCallbackCalled();
}

void HAL_CAN_TxMailbox1AbortCallback(CAN_HandleTypeDef *hcan){
    WhenTxMailbox0_1_2AbortCallbackCalled();
}

void HAL_CAN_TxMailbox2CompleteCallback(CAN_HandleTypeDef *hcan){
    WhenTxMailbox0_1_2CompleteCallbackCalled();
}

void HAL_CAN_TxMailbox2AbortCallback(CAN_HandleTypeDef *hcan){
    WhenTxMailbox0_1_2AbortCallbackCalled();
}

void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan){
    WhenCANRxFifo0MsgPending(hcan, &num_of_devices);
}
//can通信の設定
void canSetting(){
	printf("Start Initializing CAN System:Begin\n\r");
	osDelay(10);

	CAN_SystemInit(&hcan1);

//	num_of_devices.mcmd3 = 1;
	num_of_devices.mcmd3 = 3;
	num_of_devices.mcmd4 = 0;
	num_of_devices.air = 1;
	num_of_devices.servo = 1;

	printf("Start Initializing CAN System:End\n\r");
	osDelay(10);
	CAN_WaitConnect(&num_of_devices);
}

//モータ1のmcmd設定
void mcmdMoter1Setting(){
	    mcmd4M1_struct.device.node_type = NODE_MCMD3;
	    mcmd4M1_struct.device.node_id = 0;
	    mcmd4M1_struct.device.device_num = 0;

	    mcmd4M1_struct.ctrl_param.ctrl_type = MCMD_CTRL_VEL;
	    mcmd4M1_struct.ctrl_param.PID_param.kp = 0.055f;
	    mcmd4M1_struct.ctrl_param.PID_param.ki = 0.015f;
	    mcmd4M1_struct.ctrl_param.PID_param.kd = 0.02f;
	    mcmd4M1_struct.ctrl_param.accel_limit = ACCEL_LIMIT_ENABLE;
	    mcmd4M1_struct.ctrl_param.accel_limit_size = 2.0f;
	    mcmd4M1_struct.ctrl_param.feedback = MCMD_FB_ENABLE;
	    mcmd4M1_struct.ctrl_param.timup_monitor = TIMUP_MONITOR_DISABLE;
	    mcmd4M1_struct.enc_dir = MCMD_DIR_FW;
	    mcmd4M1_struct.rot_dir = MCMD_DIR_FW;
	    mcmd4M1_struct.quant_per_unit = 1.0/103500.0f;

	    mcmd4M1_struct.limit_sw_type = LIMIT_SW_NO;
	    mcmd4M1_struct.calib = CALIBRATION_DISABLE;
	    mcmd4M1_struct.calib_duty = -0.2f;
	    mcmd4M1_struct.offset = 0.0f;
	    mcmd4M1_struct.fb_type = MCMD_FB_POS;

		 MCMD_init(&mcmd4M1_struct);
		 osDelay(10);
		 MCMD_Calib(&mcmd4M1_struct);
		 osDelay(50);
		 MCMD_SetTarget(&mcmd4M1_struct, 0.0f);
		 MCMD_Control_Enable(&mcmd4M1_struct);
}

//モータ2のmcmd設定
void mcmdMoter2Setting(){
	    mcmd4M2_struct.device.node_type = NODE_MCMD3;
	    mcmd4M2_struct.device.node_id = 0;
	    mcmd4M2_struct.device.device_num = 1;

	    mcmd4M2_struct.ctrl_param.ctrl_type = MCMD_CTRL_VEL;
	    mcmd4M2_struct.ctrl_param.PID_param.kp = 0.055f;
	    mcmd4M2_struct.ctrl_param.PID_param.ki = 0.015f;
	    mcmd4M2_struct.ctrl_param.PID_param.kd = 0.02f;
	    mcmd4M2_struct.ctrl_param.accel_limit = ACCEL_LIMIT_ENABLE;
	    mcmd4M2_struct.ctrl_param.accel_limit_size = 2.0f;
	    mcmd4M2_struct.ctrl_param.feedback = MCMD_FB_ENABLE;
	    mcmd4M2_struct.ctrl_param.timup_monitor = TIMUP_MONITOR_DISABLE;
	    mcmd4M2_struct.enc_dir = MCMD_DIR_FW;
	    mcmd4M2_struct.rot_dir = MCMD_DIR_FW;
	    mcmd4M2_struct.quant_per_unit = 1.0/103500.0f;

	    mcmd4M2_struct.limit_sw_type = LIMIT_SW_NO;
	    mcmd4M2_struct.calib = CALIBRATION_DISABLE;
	    mcmd4M2_struct.calib_duty = -0.2f;
	    mcmd4M2_struct.offset = 0.0f;
	    mcmd4M2_struct.fb_type = MCMD_FB_POS;

		 MCMD_init(&mcmd4M2_struct);
		 osDelay(10);
		 MCMD_Calib(&mcmd4M2_struct);
		 osDelay(50);
		 MCMD_SetTarget(&mcmd4M2_struct, 0.00f);
		 MCMD_Control_Enable(&mcmd4M2_struct);
}

void mcmdMoter3Setting(){
	    mcmd4M3_struct.device.node_type = NODE_MCMD3;
	    mcmd4M3_struct.device.node_id = 5;
	    mcmd4M3_struct.device.device_num = 0;

	    mcmd4M3_struct.ctrl_param.ctrl_type = MCMD_CTRL_VEL;
	    mcmd4M3_struct.ctrl_param.PID_param.kp = 0.055f;
	    mcmd4M3_struct.ctrl_param.PID_param.ki = 0.015f;
	    mcmd4M3_struct.ctrl_param.PID_param.kd = 0.02f;
	    mcmd4M3_struct.ctrl_param.accel_limit = ACCEL_LIMIT_ENABLE;
	    mcmd4M3_struct.ctrl_param.accel_limit_size = 2.0f;
	    mcmd4M3_struct.ctrl_param.feedback = MCMD_FB_ENABLE;
	    mcmd4M3_struct.ctrl_param.timup_monitor = TIMUP_MONITOR_DISABLE;
	    mcmd4M3_struct.enc_dir = MCMD_DIR_FW;
	    mcmd4M3_struct.rot_dir = MCMD_DIR_FW;
	    mcmd4M3_struct.quant_per_unit = 1.0/103500.0f;

	    mcmd4M3_struct.limit_sw_type = LIMIT_SW_NO;
	    mcmd4M3_struct.calib = CALIBRATION_DISABLE;
	    mcmd4M3_struct.calib_duty = -0.2f;
	    mcmd4M3_struct.offset = 0.0f;
	    mcmd4M3_struct.fb_type = MCMD_FB_POS;

		 MCMD_init(&mcmd4M3_struct);
		 osDelay(10);
		 MCMD_Calib(&mcmd4M3_struct);
		 osDelay(50);
		 MCMD_SetTarget(&mcmd4M3_struct, 0.00f);
		 MCMD_Control_Enable(&mcmd4M3_struct);
}

void mcmdMoter4Setting(){
	    mcmd4M4_struct.device.node_type = NODE_MCMD3;
	    mcmd4M4_struct.device.node_id =5;
	    mcmd4M4_struct.device.device_num = 1;

	    mcmd4M4_struct.ctrl_param.ctrl_type = MCMD_CTRL_VEL;
	    mcmd4M4_struct.ctrl_param.PID_param.kp = 0.055f;
	    mcmd4M4_struct.ctrl_param.PID_param.ki = 0.015f;
	    mcmd4M4_struct.ctrl_param.PID_param.kd = 0.02f;
	    mcmd4M4_struct.ctrl_param.accel_limit = ACCEL_LIMIT_ENABLE;
	    mcmd4M4_struct.ctrl_param.accel_limit_size = 2.0f;
	    mcmd4M4_struct.ctrl_param.feedback = MCMD_FB_ENABLE;
	    mcmd4M4_struct.ctrl_param.timup_monitor = TIMUP_MONITOR_DISABLE;
	    mcmd4M4_struct.enc_dir = MCMD_DIR_FW;
	    mcmd4M4_struct.rot_dir = MCMD_DIR_FW;
	    mcmd4M4_struct.quant_per_unit = 1.0/26850.0f;

	    mcmd4M4_struct.limit_sw_type = LIMIT_SW_NO;
	    mcmd4M4_struct.calib = CALIBRATION_DISABLE;
	    mcmd4M4_struct.calib_duty = -0.2f;
	    mcmd4M4_struct.offset = 0.0f;
	    mcmd4M4_struct.fb_type = MCMD_FB_POS;

		 MCMD_init(&mcmd4M4_struct);
		 osDelay(10);
		 MCMD_Calib(&mcmd4M4_struct);
		 osDelay(50);
		 MCMD_SetTarget(&mcmd4M4_struct, 0.00f);
		 MCMD_Control_Enable(&mcmd4M4_struct);
}

void mcmdMoter5Setting(){
	    mcmd4M5_struct.device.node_type = NODE_MCMD3;
	    mcmd4M5_struct.device.node_id =2;
	    mcmd4M5_struct.device.device_num = 0;

	    mcmd4M5_struct.ctrl_param.ctrl_type = MCMD_CTRL_POS;
	    mcmd4M5_struct.ctrl_param.PID_param.kp = 0.2f;
	    mcmd4M5_struct.ctrl_param.PID_param.ki = 0.05f;
	    mcmd4M5_struct.ctrl_param.PID_param.kd = 0.01f;
	    mcmd4M5_struct.ctrl_param.accel_limit = ACCEL_LIMIT_ENABLE;
	    mcmd4M5_struct.ctrl_param.accel_limit_size = 2.0f;
	    mcmd4M5_struct.ctrl_param.feedback = MCMD_FB_ENABLE;
	    mcmd4M5_struct.ctrl_param.timup_monitor = TIMUP_MONITOR_DISABLE;
	    mcmd4M5_struct.enc_dir = MCMD_DIR_BC;
	    mcmd4M5_struct.rot_dir = MCMD_DIR_BC;
	    mcmd4M5_struct.quant_per_unit = 1.0/1024.0f;

	    mcmd4M5_struct.limit_sw_type = LIMIT_SW_NO;
	    mcmd4M5_struct.calib = CALIBRATION_DISABLE;
	    mcmd4M5_struct.calib_duty = -0.2f;
	    mcmd4M5_struct.offset = 0.0f;
	    mcmd4M5_struct.fb_type = MCMD_FB_POS;

		 MCMD_init(&mcmd4M5_struct);
		 osDelay(10);
		 MCMD_Calib(&mcmd4M5_struct);
		 osDelay(50);
		 MCMD_SetTarget(&mcmd4M5_struct, 0.00f);
		 MCMD_Control_Enable(&mcmd4M5_struct);
}

void mcmdMoter6Setting(){
	    mcmd4M6_struct.device.node_type = NODE_MCMD3;
	    mcmd4M6_struct.device.node_id =2;
	    mcmd4M6_struct.device.device_num = 1;

	    mcmd4M6_struct.ctrl_param.ctrl_type = MCMD_CTRL_POS;
	    mcmd4M6_struct.ctrl_param.PID_param.kp = 0.2f;
	    mcmd4M6_struct.ctrl_param.PID_param.ki = 0.05f;
	    mcmd4M6_struct.ctrl_param.PID_param.kd = 0.01f;
	    mcmd4M6_struct.ctrl_param.accel_limit = ACCEL_LIMIT_ENABLE;
	    mcmd4M6_struct.ctrl_param.accel_limit_size = 2.0f;
	    mcmd4M6_struct.ctrl_param.feedback = MCMD_FB_ENABLE;
	    mcmd4M6_struct.ctrl_param.timup_monitor = TIMUP_MONITOR_DISABLE;
	    mcmd4M6_struct.enc_dir = MCMD_DIR_FW;
	    mcmd4M6_struct.rot_dir = MCMD_DIR_FW;
	    mcmd4M6_struct.quant_per_unit = 1.0/1024.0f;

	    mcmd4M6_struct.limit_sw_type = LIMIT_SW_NO;
	    mcmd4M6_struct.calib = CALIBRATION_DISABLE;
	    mcmd4M6_struct.calib_duty = -0.2f;
	    mcmd4M6_struct.offset = 0.0f;
	    mcmd4M6_struct.fb_type = MCMD_FB_POS;

		 MCMD_init(&mcmd4M6_struct);
		 osDelay(10);
		 MCMD_Calib(&mcmd4M6_struct);
		 osDelay(50);
		 MCMD_SetTarget(&mcmd4M6_struct, 0.00f);
		 MCMD_Control_Enable(&mcmd4M6_struct);
}

void mcmdMoter7Setting(){
	    mcmd4M7_struct.device.node_type = NODE_MCMD3;
	    mcmd4M7_struct.device.node_id =3;
	    mcmd4M7_struct.device.device_num = 0;

	    mcmd4M7_struct.ctrl_param.ctrl_type = MCMD_CTRL_DUTY;
	    mcmd4M7_struct.ctrl_param.PID_param.kp = 0.075f;
	    mcmd4M7_struct.ctrl_param.PID_param.ki = 0.025f;
	    mcmd4M7_struct.ctrl_param.PID_param.kd = 0.01f;
	    mcmd4M7_struct.ctrl_param.accel_limit = ACCEL_LIMIT_ENABLE;
	    mcmd4M7_struct.ctrl_param.accel_limit_size = 2.0f;
	    mcmd4M7_struct.ctrl_param.feedback = MCMD_FB_ENABLE;
	    mcmd4M7_struct.ctrl_param.timup_monitor = TIMUP_MONITOR_DISABLE;
	    mcmd4M7_struct.enc_dir = MCMD_DIR_FW;
	    mcmd4M7_struct.rot_dir = MCMD_DIR_BC;
	    mcmd4M7_struct.quant_per_unit = 1.0/1024.0f;

	    mcmd4M7_struct.limit_sw_type = LIMIT_SW_NO;
	    mcmd4M7_struct.calib = CALIBRATION_DISABLE;
	    mcmd4M7_struct.calib_duty = -0.2f;
	    mcmd4M7_struct.offset = 0.0f;
	    mcmd4M7_struct.fb_type = MCMD_FB_POS;

		 MCMD_init(&mcmd4M7_struct);
		 osDelay(10);
		 MCMD_Calib(&mcmd4M7_struct);
		 osDelay(50);
		 MCMD_SetTarget(&mcmd4M7_struct, 0.00f);
		 MCMD_Control_Enable(&mcmd4M7_struct);
}

void mcmdMoter8Setting(){
	    mcmd4M8_struct.device.node_type = NODE_MCMD3;
	    mcmd4M8_struct.device.node_id =3;
	    mcmd4M8_struct.device.device_num = 1;

	    mcmd4M8_struct.ctrl_param.ctrl_type = MCMD_CTRL_DUTY;
	    mcmd4M8_struct.ctrl_param.PID_param.kp = 0.075f;
	    mcmd4M8_struct.ctrl_param.PID_param.ki = 0.025f;
	    mcmd4M8_struct.ctrl_param.PID_param.kd = 0.01f;
	    mcmd4M8_struct.ctrl_param.accel_limit = ACCEL_LIMIT_ENABLE;
	    mcmd4M8_struct.ctrl_param.accel_limit_size = 2.0f;
	    mcmd4M8_struct.ctrl_param.feedback = MCMD_FB_ENABLE;
	    mcmd4M8_struct.ctrl_param.timup_monitor = TIMUP_MONITOR_DISABLE;
	    mcmd4M8_struct.enc_dir = MCMD_DIR_FW;
	    mcmd4M8_struct.rot_dir = MCMD_DIR_BC;
	    mcmd4M8_struct.quant_per_unit = 1.0/1024.0f;

	    mcmd4M8_struct.limit_sw_type = LIMIT_SW_NO;
	    mcmd4M8_struct.calib = CALIBRATION_DISABLE;
	    mcmd4M8_struct.calib_duty = -0.2f;
	    mcmd4M8_struct.offset = 0.0f;
	    mcmd4M8_struct.fb_type = MCMD_FB_POS;

		 MCMD_init(&mcmd4M8_struct);
		 osDelay(10);
		 MCMD_Calib(&mcmd4M8_struct);
		 osDelay(50);
		 MCMD_SetTarget(&mcmd4M8_struct, 0.00f);
		 MCMD_Control_Enable(&mcmd4M8_struct);
}

//サーボ基盤設定
void servo1Setting(){
	servo_device1.node_type = NODE_SERVO;
	servo_device1.node_id = 1;
	servo_device1.device_num = 0;

	servo_param1.angle_range=270.0f;
	servo_param1.angle_offset=0.0f;
	servo_param1.pulse_width_max=2.4f;
	servo_param1.pulse_width_min=0.5f;
	servo_param1.pwm_frequency=50;

	osDelay(50);
}

void servo2Setting(){
	servo_device2.node_type = NODE_SERVO;
	servo_device2.node_id = 1;
	servo_device2.device_num = 1;

	servo_param2.angle_range=270.0f;
	servo_param2.angle_offset=0.0f;
	servo_param2.pulse_width_max=2.4f;
	servo_param2.pulse_width_min=0.5f;
	servo_param2.pwm_frequency=50;

	osDelay(50);
}

//エアシリ基盤設定
void airSetting(){
	air_device.node_type = NODE_AIR;
	air_device.node_id = 0;

	 for(uint8_t i=PORT_1; i<=PORT_8; i++){
		air_device.device_num = i; //
		AirCylinder_Init(&air_device, AIR_OFF);
		HAL_Delay(10);  // このdelayは必要
	 }
}
/* USER CODE END FunctionPrototypes */

void StartDefaultTask(void *argument);
void StartSysCheckTask(void *argument);
void StartMotorRunTask(void *argument);
void StartEncorderTask(void *argument);

extern void MX_USB_DEVICE_Init(void);
void MX_FREERTOS_Init(void); /* (MISRA C 2004 rule 8.1) */

/**
  * @brief  FreeRTOS initialization
  * @param  None
  * @retval None
  */
void MX_FREERTOS_Init(void) {
  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* USER CODE BEGIN RTOS_MUTEX */
  /* add mutexes, ... */
  /* USER CODE END RTOS_MUTEX */

  /* USER CODE BEGIN RTOS_SEMAPHORES */
  /* add semaphores, ... */
  /* USER CODE END RTOS_SEMAPHORES */

  /* USER CODE BEGIN RTOS_TIMERS */
  /* start timers, add new ones, ... */
  /* USER CODE END RTOS_TIMERS */

  /* USER CODE BEGIN RTOS_QUEUES */
  /* add queues, ... */
  /* USER CODE END RTOS_QUEUES */

  /* Create the thread(s) */
  /* creation of defaultTask */
  defaultTaskHandle = osThreadNew(StartDefaultTask, NULL, &defaultTask_attributes);

  /* creation of SysCeckTask */
  SysCeckTaskHandle = osThreadNew(StartSysCheckTask, NULL, &SysCeckTask_attributes);

  /* creation of MotorRunTask */
  MotorRunTaskHandle = osThreadNew(StartMotorRunTask, NULL, &MotorRunTask_attributes);

  /* creation of EncorderTask */
  EncorderTaskHandle = osThreadNew(StartEncorderTask, NULL, &EncorderTask_attributes);

  /* USER CODE BEGIN RTOS_THREADS */
  /* add threads, ... */
  /* USER CODE END RTOS_THREADS */

  /* USER CODE BEGIN RTOS_EVENTS */
  /* add events, ... */
  /* USER CODE END RTOS_EVENTS */

}

/* USER CODE BEGIN Header_StartDefaultTask */
/**
  * @brief  Function implementing the defaultTask thread.
  * @param  argument: Not used
  * @retval None
  */

//過去の遺物
void service_callback(const void *request, void *response)
{
	custom_test_msgs__srv__AddThreeInts_Request *_req = (custom_test_msgs__srv__AddThreeInts_Request *)request;
	custom_test_msgs__srv__AddThreeInts_Response *_res = (custom_test_msgs__srv__AddThreeInts_Response *)response;

	osDelay(1000);

	_res->sum = _req->a + _req->b + _req->c;
}

//速度司令を格納
void subscription_callback(const void * msgin)
{
	  const drive_msgs__msg__Omni * sub = (const drive_msgs__msg__Omni *)msgin;

	  cmd_motor[0] = sub->mfontright;
	  cmd_motor[1] = sub->mfrontleft;
	  cmd_motor[2] = sub->mbackright;
	  cmd_motor[3] = sub->mbackleft;
}

//micro-rosでのデバッグ用
void print_int(int num){
	rosidl_runtime_c__String__init(&pub);
	char val[12];
	snprintf(val, 12, "%d", num);
	rosidl_runtime_c__String__assignn(&pub.data, val, sizeof(val));
	RCSOFTCHECK(rcl_publish(&publisher, &pub, NULL));
}

//マニピュレーションのためのコールバック関数群
void manipsub_callback(const void * msgin)
{
	 // Cast received message to used type
	  const manip_msgs__msg__Cmd * msub = (const manip_msgs__msg__Cmd *)msgin;

	  print_int(msub->num);
	  print_int(msub->top_base_arm);
	  print_int(msub->top_base_hand);

	  work_arm_deployer(msub->work_arm_deploy);
	  work_arm_setter(msub->work_arm);
	  work_hand_setter(msub->work_hand);
	  base1_arm_setter(msub->top_base_arm);
	  base1_hand_setter(msub->top_base_hand);
	  base2_arm_setter(msub->bottom_base_arm);
	  base2_hand_setter(msub->bottom_base_hand);

	  HAL_GPIO_TogglePin(GPIOB, LD2_Pin);
}

void work_arm_deployer(int state){//state:{0:close,1:open}
	if(state == 0){
		ServoDriver_Init(&servo_device1, &servo_param1);
		osDelay(100);  // 適切なdelayを入れる
		ServoDriver_SendValue(&servo_device1, 45.0f);
		ServoDriver_Init(&servo_device2, &servo_param2);
		osDelay(100);
		ServoDriver_SendValue(&servo_device2, 135.0f);
	}else if(state == 1){
		ServoDriver_Init(&servo_device2, &servo_param2);
		osDelay(100);
		ServoDriver_SendValue(&servo_device2, 45.0f);
		ServoDriver_Init(&servo_device1, &servo_param1);
		osDelay(100);
		ServoDriver_SendValue(&servo_device1, 135.0f);
	}
}

void work_hand_setter(int state){//state:{0:open,1:close}
	  if(state == 0){
		  air_device.device_num=1;
		  AirCylinder_SendOutput(&air_device, AIR_OFF);
	  }else if(state == 1){
		  air_device.device_num=1;
		  AirCylinder_SendOutput(&air_device, AIR_ON);
	  }
}

void work_arm_setter(int state){//state:{0:up,1:down}
	  if(state == 0){
		  air_device.device_num=0;
		  AirCylinder_SendOutput(&air_device, AIR_OFF);
	  }else if(state == 1){
		  air_device.device_num=0;
		  AirCylinder_SendOutput(&air_device, AIR_ON);
	  }
}

void base1_arm_setter(int state){
	if(state == 0){
		MCMD_SetTarget(&mcmd4M5_struct,0.0f);
	}else if(state == 1){
		MCMD_SetTarget(&mcmd4M5_struct,0.5f);
	}
}

void base1_hand_setter(int state){
	if(state == 0){
		air_device.device_num=3;
		AirCylinder_SendOutput(&air_device, AIR_OFF);
		}else if(state == 1){
			air_device.device_num=3;
			AirCylinder_SendOutput(&air_device, AIR_ON);
		}
}

void base2_arm_setter(int state){
	if(state == 0){
		MCMD_SetTarget(&mcmd4M6_struct,0.0f);
	}else if(state == 1){
		MCMD_SetTarget(&mcmd4M6_struct,0.75f);
	}
}

void base2_hand_setter(int state){
	if(state == 0){
		air_device.device_num=2;
		AirCylinder_SendOutput(&air_device, AIR_OFF);
		}else if(state == 1){
			air_device.device_num=2;
			AirCylinder_SendOutput(&air_device, AIR_ON);
		}
}


/* USER CODE END Header_StartDefaultTask */
void StartDefaultTask(void *argument)
{
  /* init code for USB_DEVICE */
  MX_USB_DEVICE_Init();
  /* USER CODE BEGIN StartDefaultTask */
  // micro-ROSの設定
  	rmw_uros_set_custom_transport(
  	    true,
  	    (void *) &huart3,
  	    cubemx_transport_open,
  	    cubemx_transport_close,
  	    cubemx_transport_write,
  	    cubemx_transport_read);

  	rcl_allocator_t freeRTOS_allocator = rcutils_get_zero_initialized_allocator();
  	freeRTOS_allocator.allocate = microros_allocate;
  	freeRTOS_allocator.deallocate = microros_deallocate;
  	freeRTOS_allocator.reallocate = microros_reallocate;
  	freeRTOS_allocator.zero_allocate =  microros_zero_allocate;
  	if (!rcutils_set_default_allocator(&freeRTOS_allocator)) {
  		printf("Error on default allocators (line %d)\n", __LINE__);
  	}

  	osDelay(100);

  	setvbuf(stdout, NULL, _IONBF, BUFSIZ);
  	rcl_init_options_t init_options = rcl_get_zero_initialized_init_options();
  	rcl_allocator_t allocator = rcl_get_default_allocator();
  	rclc_support_t support;
  	rcl_node_t node = rcl_get_zero_initialized_node();
  	rcl_service_t service = rcl_get_zero_initialized_service();
  	publisher = rcl_get_zero_initialized_publisher();
  	rcl_subscription_t subscriber = rcl_get_zero_initialized_subscription();
  	rcl_subscription_t manipsub = rcl_get_zero_initialized_subscription();
  	rclc_executor_t executor = rclc_executor_get_zero_initialized_executor();
  	rcl_node_options_t node_ops = rcl_node_get_default_options();

  	osDelay(100);

  	//ノードの設定
  	RCCHECK(rcl_init_options_init(&init_options, allocator));
  	RCCHECK(rcl_init_options_set_domain_id(&init_options, 0));
  	rclc_support_init_with_options(&support, 0, NULL, &init_options, &allocator);
  	RCCHECK(rclc_node_init_with_options(&node, "f7_node", "", &support, &node_ops));
  	RCCHECK(rclc_service_init_default(&service, &node, ROSIDL_GET_SRV_TYPE_SUPPORT(custom_test_msgs, srv, AddThreeInts), "add_three_ints"));

	RCCHECK(rclc_publisher_init_default(
	  &publisher,
	  &node,
	  ROSIDL_GET_MSG_TYPE_SUPPORT(std_msgs, msg, String),
	  "/from_f767zi"));

		RCCHECK(rclc_publisher_init_default(
		  &encpublisher,
		  &node,
		  ROSIDL_GET_MSG_TYPE_SUPPORT(drive_msgs, msg, OmniEnc),
		  "/enc_val_f7"));

		RCCHECK(rclc_subscription_init_default(
		  &subscriber,
		  &node,
		  ROSIDL_GET_MSG_TYPE_SUPPORT(drive_msgs, msg, Omni),
		  "/cmd_motor_f7"));

		RCCHECK(rclc_subscription_init_default(
		  &manipsub,
		  &node,
		  ROSIDL_GET_MSG_TYPE_SUPPORT(manip_msgs, msg, Cmd),
		  "/manip_cmd_f7"));

		RCCHECK(rclc_executor_init(&executor, &support.context, 3, &allocator));

  	RCCHECK(rclc_executor_add_service(&executor, &service, &req, &res, &service_callback));
  	RCCHECK(rclc_executor_add_subscription(
  		  &executor, &subscriber, &sub,
  		  &subscription_callback, ON_NEW_DATA));
  	RCCHECK(rclc_executor_add_subscription(
  	  		  &executor, &manipsub, &msub,
  	  		  &manipsub_callback, ON_NEW_DATA));

  	osDelay(100);

    //配列データを扱うときの処理
    rosidl_runtime_c__String__init(&pub);
    char hello[] = "initialized from f7";
    rosidl_runtime_c__String__assignn(&pub.data, hello, sizeof(hello));
    RCSOFTCHECK(rcl_publish(&publisher, &pub, NULL));

    //ピンの初期化
    HAL_GPIO_WritePin(GPIOB, LD2_Pin, GPIO_PIN_RESET);

    //CANの設定を実行
	canSetting();
	mcmdMoter1Setting();
	mcmdMoter2Setting();
	mcmdMoter3Setting();
	mcmdMoter4Setting();
//	mcmdMoter5Setting();
//	mcmdMoter6Setting();
//	mcmdMoter7Setting();
//	mcmdMoter8Setting();
	servo1Setting();
	servo2Setting();
	airSetting();

	printf("All Setting Finished\r\n");
	finishCANsetting = true;
	osDelay(100);

  /* Infinite loop */
  for(;;)
  {
	  // エグゼキューターを実行してリクエストを処理
	  rclc_executor_spin_some(&executor, RCL_MS_TO_NS(100));
	  //RCSOFTCHECK(rcl_publish(&encpublisher, &enc, NULL));//printfを見たいときはコメントアウト

	  osDelay(10);
  }
  // 終了処理
  	RCCHECK(rcl_service_fini(&service, &node));
  	RCCHECK(rcl_service_fini(&publisher, &node));
  	RCCHECK(rcl_service_fini(&subscriber, &node));
  	RCCHECK(rcl_service_fini(&manipsub, &node));
  	RCCHECK(rcl_node_fini(&node));
  /* USER CODE END StartDefaultTask */
}

/* USER CODE BEGIN Header_StartSysCheckTask */
/**
* @brief Function implementing the SysCeckTask thread.
* @param argument: Not used
* @retval None
*/
//動作確認のための関数群
bool finishCheck = false;//動作確認が終わったかどうかのフラグ

void freeRTOSChecker(){//無限ループの中で実行
	HAL_GPIO_TogglePin(GPIOB, LD2_Pin);  // PINのPin stateを反転
	printf("RTOSchecking\r\n");

}


float velLimmiter(float input){
	const float velLimmit = 3.0f;
	if(input >= velLimmit){
		input = velLimmit;
	}else if(input <= velLimmit*-1.0){
		input = velLimmit*-1.0;
	}

	return input;
}

float dutyLimmiter(float input){
	const float dutyLimmit = 0.75;
	if(input >= dutyLimmit){
		input = dutyLimmit;
	}else if(input <= dutyLimmit*-1.0){
		input = dutyLimmit*-1.0;
	}

	return input;
}

void mcmdMotorCecker(MCMD_HandleTypedef *mcmd_struct, int ctrl_mode,float target, int testSec, float endTarget){
	int node_id = mcmd_struct->device.node_id;
	int device_num = mcmd_struct->device.device_num;
	int ctrl_type = mcmd_struct->ctrl_param.ctrl_type;

	osDelay(100);
	switch(ctrl_mode){
		case MCMD_CTRL_DUTY:
			target = dutyLimmiter(target);
			break;
		case MCMD_CTRL_VEL:
			target = velLimmiter(target);
			break;
		default:
			break;
	}

	printf("MCMD3 Check node_id:%d device_num:%d\r\n",node_id,device_num);

	MCMD_Control_Disable(mcmd_struct);
	mcmd_struct->ctrl_param.ctrl_type = ctrl_mode;
	MCMD_ChangeControl(mcmd_struct);
	MCMD_Calib(mcmd_struct);
	MCMD_SetTarget(mcmd_struct,target);
	MCMD_Control_Enable(mcmd_struct);

	osDelay(testSec);

	MCMD_Control_Disable(mcmd_struct);
	mcmd_struct->ctrl_param.ctrl_type = ctrl_type;
	MCMD_ChangeControl(mcmd_struct);
	MCMD_Calib(mcmd_struct);
	MCMD_SetTarget(mcmd_struct,endTarget);
	MCMD_Control_Enable(mcmd_struct);

	osDelay(100);
}

void mcmdEncChecker(MCMD_Feedback_Typedef *mcmd_fb, MCMD_HandleTypedef *mcmd_struct, int interbalSec){
	int node_id = mcmd_struct->device.node_id;
	int device_num = mcmd_struct->device.device_num;

	mcmd_fb->value = Get_MCMD_Feedback(&(mcmd_struct->device)).value;
	printf("value of %d node %d device %d\r\n",node_id,device_num,(int)((mcmd_fb->value)*100));
	osDelay(interbalSec);
}

//サーボの動作確認用
void servo1Checker(){
	ServoDriver_Init(&servo_device1, &servo_param1);
	osDelay(100);  // 適切なdelayを入れる
	ServoDriver_SendValue(&servo_device1, 45.0f);
}
void servo2Checker(){
	ServoDriver_Init(&servo_device2, &servo_param2);
	osDelay(100);  // 適切なdelayを入れる
	ServoDriver_SendValue(&servo_device2, 135.0f);
}

//エアシリの動作確認用
void airChecker(){
	  air_device.device_num=0;
	  AirCylinder_SendOutput(&air_device, AIR_ON);
	  air_device.device_num=1;
	  AirCylinder_SendOutput(&air_device, AIR_ON);
	  osDelay(2000);
	  air_device.device_num=0;
	  AirCylinder_SendOutput(&air_device, AIR_OFF);
	  air_device.device_num=1;
	  AirCylinder_SendOutput(&air_device, AIR_OFF);
}
/* USER CODE END Header_StartSysCheckTask */
void StartSysCheckTask(void *argument)
{
  /* USER CODE BEGIN StartSysCheckTask */
  /* Infinite loop */
  for(;;)
  {
	  if(finishCANsetting){
		  if(!finishCheck){
			  osDelay(1000);//このdelayは必要？
			  //servo1Checker();
			  //servo2Checker();
//			  mcmdMotorCecker(&mcmd4M1_struct,MCMD_CTRL_VEL,-2.0f,5000,0.0f);
//			  mcmdMotorCecker(&mcmd4M2_struct,MCMD_CTRL_VEL,-2.0f,5000,0.0f);
//			  mcmdMotorCecker(&mcmd4M3_struct,MCMD_CTRL_VEL,-2.0f,5000,0.0f);
//			  mcmdMotorCecker(&mcmd4M4_struct,MCMD_CTRL_VEL,-2.0f,5000,0.0f);

			  finishCheck = true;
		  	  }
	  }
	  //freeRTOSChecker();
	  //airChecker();
	  mcmdEncChecker(&mcmdM1_fb,&mcmd4M1_struct,100);
	  mcmdEncChecker(&mcmdM2_fb,&mcmd4M2_struct,100);
	  mcmdEncChecker(&mcmdM3_fb,&mcmd4M3_struct,100);
	  mcmdEncChecker(&mcmdM4_fb,&mcmd4M4_struct,100);
//	  mcmdEncChecker(&mcmdM5_fb,&mcmd4M5_struct,100);
//	  mcmdEncChecker(&mcmdM6_fb,&mcmd4M6_struct,100);
	  osDelay(10);
  }
  /* USER CODE END StartSysCheckTask */
}

/* USER CODE BEGIN Header_StartMotorRunTask */
/**
* @brief Function implementing the MotorRunTask thread.
* @param argument: Not used
* @retval None
*/
void motorRun(){
	MCMD_SetTarget(&mcmd4M1_struct,cmd_motor[0]);
	MCMD_SetTarget(&mcmd4M2_struct,cmd_motor[1]);
	MCMD_SetTarget(&mcmd4M3_struct,cmd_motor[2]);
	MCMD_SetTarget(&mcmd4M4_struct,cmd_motor[3]);
}
/* USER CODE END Header_StartMotorRunTask */
void StartMotorRunTask(void *argument)
{
  /* USER CODE BEGIN StartMotorRunTask */
	cmd_motor[0] = 1.0f;
	cmd_motor[1] = 1.0f;
	cmd_motor[2] = 1.0f;
	cmd_motor[3] = 1.0f;
  /* Infinite loop */
  for(;;)
  {
	  motorRun();

    osDelay(10);
  }
  /* USER CODE END StartMotorRunTask */
}

/* USER CODE BEGIN Header_StartEncorderTask */
/**
* @brief Function implementing the EncorderTask thread.
* @param argument: Not used
* @retval None
*/

int16_t read_encoder1_value(void)
{
  uint16_t enc_buff = TIM1->CNT;
  TIM1->CNT = 0;//初期化
  return (int16_t)enc_buff;
}

int16_t read_encoder2_value(void)
{
  uint16_t enc_buff = TIM8->CNT;
  TIM8->CNT = 0;//初期化
  return (int16_t)enc_buff;
}

//エンコーダーの値を読む際に用いる変数の宣言
int64_t count1;
int64_t count2;
float quant_per_unit = 1.0/4096.0f;
/* USER CODE END Header_StartEncorderTask */
void StartEncorderTask(void *argument)
{
  /* USER CODE BEGIN StartEncorderTask */
	//エンコーダーの読み取りをスタート
	HAL_TIM_Encoder_Start(&htim1, TIM_CHANNEL_ALL);
	HAL_TIM_Encoder_Start(&htim8, TIM_CHANNEL_ALL);
  /* Infinite loop */
  for(;;)
  {
//	  count1 += read_encoder1_value();
//	  count2 += read_encoder2_value();

//	  enc.encfontright = Get_MCMD_Feedback(&(mcmd4M1_struct.device)).value;
//	  enc.encfrontleft = Get_MCMD_Feedback(&(mcmd4M2_struct.device)).value;
//	  enc.encbackright = Get_MCMD_Feedback(&(mcmd4M3_struct.device)).value;
//	  enc.encbackleft = Get_MCMD_Feedback(&(mcmd4M4_struct.device)).value;
//	  enc.enclx = (int)(count1*quant_per_unit);
//	  enc.encly = (int)(count2*quant_per_unit);
//	  enc.encadditional = Get_MCMD_Feedback(&(mcmd4M6_struct.device)).value;

    osDelay(1000);
  }
  /* USER CODE END StartEncorderTask */
}

/* Private application code --------------------------------------------------*/
/* USER CODE BEGIN Application */

/* USER CODE END Application */

