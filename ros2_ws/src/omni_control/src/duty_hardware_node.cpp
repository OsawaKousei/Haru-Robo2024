#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "drive_msgs/msg/omni.hpp"
#include "drive_msgs/msg/omni_enc.hpp"
#include "drive_msgs/msg/omni_enc_mod.hpp"
#include "cmath"

using namespace std::chrono_literals;

class OmniHardwareNode : public rclcpp::Node {
public:
    //ロボットの種類
    std::string type;
    //車輪の半径
    std::double_t w_rad;
    //車輪-中心間距離
    std::double_t w_dis;
    //エンコーダの半径
    std::double_t e_rad;
    //回転エンコーダー-中心間距離
    std::double_t e_dis;

    OmniHardwareNode() : Node("omni_hardware_node") {

        lxmod = 0.0;
        lymod = 0.0;

        //パラメータの宣言
        declare_parameter("robot_type", "default");
        declare_parameter("wheel_radious", -1.0);
        declare_parameter("wheel_distance", -1.0);
        declare_parameter("enc_radious", -1.0);
        declare_parameter("enc_distance", -1.0);

        //パラメータの取得
        type = get_parameter("robot_type").as_string();
        w_rad= get_parameter("wheel_radious").as_double();
        w_dis = get_parameter("wheel_distance").as_double();
        e_rad = get_parameter("enc_radious").as_double();
        e_dis = get_parameter("enc_distance").as_double();

        //パラメータの表示
        RCLCPP_INFO(this->get_logger(), "robot type:%s\r\n",type.c_str());
        RCLCPP_INFO(this->get_logger(), "wheel radious:%f\r\n",w_rad);
        RCLCPP_INFO(this->get_logger(), "wheel distance:%f\r\n",w_dis);
        RCLCPP_INFO(this->get_logger(), "enc radious:%f\r\n",e_rad);
        RCLCPP_INFO(this->get_logger(), "enc distance:%f\r\n",e_dis);
        
        motorpub = this->create_publisher<drive_msgs::msg::Omni>("/cmd_motor_f7", 10);

        auto motor_callback = [this](const drive_msgs::msg::Omni &msg) -> void {

            auto message = drive_msgs::msg::Omni();

            message.mbackright = msg.mbackright;
            message.mbackleft = msg.mbackleft;
            message.mfontright = msg.mfontright;
            message.mfrontleft = msg.mfrontleft;

            this->motorpub->publish(message);
        }; 

        motorsub = this->create_subscription<drive_msgs::msg::Omni>("/cmd_motor", 10,motor_callback);

        encpub = this->create_publisher<drive_msgs::msg::OmniEnc>("/enc_val", 10);

        auto enc_callback = [this](const drive_msgs::msg::OmniEnc &msg) -> void {

            auto message = drive_msgs::msg::OmniEnc();

            message.encfontright = msg.encfontright*2*M_PI*w_rad;
            message.encfrontleft = msg.encfrontleft*2*M_PI*w_rad;
            message.encbackright = msg.encbackright*2*M_PI*w_rad;
            message.encbackright = msg.encbackright*2*M_PI*w_rad;
            message.enclx = msg.enclx*2*M_PI*e_rad;
            message.encly = msg.encly*2*M_PI*e_rad;
            message.encadditional = msg.encadditional*2*M_PI*e_rad;

            message.enclx += lxmod;
            message.encly += lymod;

            this->encpub->publish(message);
        }; 

        auto enc_mod_callback = [this](const drive_msgs::msg::OmniEncMod &msg) -> void {
                lxmod += msg.enclx;
                lymod += msg.encly;
        }; 


        encsub = this->create_subscription<drive_msgs::msg::OmniEnc>("/enc_val_f7", 10,enc_callback);
        modsub = this->create_subscription<drive_msgs::msg::OmniEncMod>("/enc_mod", 10,enc_mod_callback);

    }
private:
    // 上記の動作に必要なprivateメンバ
    rclcpp::Subscription<drive_msgs::msg::Omni>::SharedPtr motorsub;
    rclcpp::Subscription<drive_msgs::msg::OmniEncMod>::SharedPtr modsub;
    rclcpp::Publisher<drive_msgs::msg::Omni>::SharedPtr motorpub;
    rclcpp::Subscription<drive_msgs::msg::OmniEnc>::SharedPtr encsub;
    rclcpp::Publisher<drive_msgs::msg::OmniEnc>::SharedPtr encpub;

    float lxmod;
    float lymod;
};

int main(int argc, char *argv[]) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<OmniHardwareNode>());
    rclcpp::shutdown();
    return 0;
}