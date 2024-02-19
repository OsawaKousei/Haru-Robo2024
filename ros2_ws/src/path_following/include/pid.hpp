#include <string>
#include <iostream>

class PID_ctrl{
public:
    float Kp = 0;
    float Ki = 0;
    float Kd = 0;

    float ctrl_period = 0.01;//sec
    float goal = 0;

    bool max_limit_flag = false;
    float max_limit = 0;
    bool min_limit_flag = false;
    float min_limit = 0;
    bool accel_limit_flag = false;
    float accel_limit = 0;
    bool integral_limit_flag = false;
    float integral_limit = 0;

    bool torelance_flag = false;
    float torelance = 0;
    enum Torelance_type{
        None = 0,
        Stop,
        Keep
    };
    Torelance_type torelance_type = None;

    bool succeed_judge_flag = false;
    bool succeed_flag = false;
    float succeed_torelance = 0;
    float succeed_judge_time = 0;//sec

    bool cmd_debug_flag = false;
    bool torelance_debug_flag = false;
    bool succeed_debug_flag = false;

    PID_ctrl(float goal){
       this->goal = goal;
    }

    float pid_ctrl(float present_val){
        float cmd = 0;
        diff_setter(present_val);
        cmd = pid_logic();
        if (integral_limit_flag)
        {
            integral_limiter();
        }
        if (max_limit_flag)
        {
            cmd = max_limiter(cmd);
        }
        if (min_limit_flag)
        {
            cmd = min_limiter(cmd);
        }
        cmd = torelance_executor(cmd);
        if (accel_limit_flag)
        {
            cmd = accel_limiter(cmd);
        }
        if(cmd_debug_flag){
            std::cout << "cmd: " << cmd << std::endl;
        }
        return cmd;
    }

    float pid_ctrl(float present_val, float goal){
        this->goal = goal;
        return pid_ctrl(present_val);
    }

    void integral_reset(){
        integral = 0;
    }

    bool if_succeed(){
        return succeed_flag;
    }

    void show_param(){
        std::cout << "Kp: " << Kp << std::endl;
        std::cout << "Ki: " << Ki << std::endl;
        std::cout << "Kd: " << Kd << std::endl;
        std::cout << "goal: " << goal << std::endl;
        std::cout << "max_limit: " << max_limit << std::endl;
        std::cout << "min_limit: " << min_limit << std::endl;
        std::cout << "accel_limit: " << accel_limit << std::endl;
        std::cout << "integral_limit: " << integral_limit << std::endl;
    }
private:
    float integral = 0;
    float diff[2] = {0, 0};
    float cmd[2] = {0, 0};
    float succeed_count = 0;

    void succeed_judge_executor(){
        bool succeed_judge = false;
        if(diff[1] < succeed_torelance && diff[1] >= 0){
            succeed_judge = true;
        }else if (diff[1] > -1*succeed_torelance && diff[1] < 0){
            succeed_judge = true;
        }
        if (succeed_judge)
        {
            succeed_count += ctrl_period;
        }else{
            succeed_count = 0;
        }
        if(succeed_count > succeed_judge_time){
            succeed_flag = true;
            succeed_count = 0;
            if(succeed_debug_flag){
                std::cout << "succeed detected"<< std::endl;
            }
        }
    }

    float torelance_executor(float val){
        bool torelance_flag = false;
        float ans = val;
        if(diff[1] < torelance && diff[1] >= 0){
            torelance_flag = true;
        }else if (diff[1] > -1*torelance && diff[1] < 0)
        {
            torelance_flag = true;
        }
        if(torelance_flag){
            switch (torelance_type)
            {
            case None:
                ans = val;
                break;
            case Stop:
                ans = 0;
                break;
            case Keep:
                ans = cmd[1];
                break;
            default:
                ans = val;
                break;
            }
        }
        if(torelance_debug_flag){
                std::cout << "torelance executed"<< std::endl;
        }
        return ans;
    }

    float max_limiter(float val){
        if(val > max_limit){
            val = max_limit;
        }else if (val < -1*max_limit)
        {
            val = -1*max_limit;
        }
        return val;
    }

    float min_limiter(float val){
        if(val < min_limit && val >= 0){
            val = min_limit;
        }else if (val > -1*min_limit && val < 0)
        {
            val = -1*min_limit;
        }
        return val;
    }

    float accel_limiter(float new_cmd){
        cmd[0] = cmd[1];
        cmd[1] = new_cmd;
        if(cmd[1] - cmd[0] > accel_limit){
            new_cmd = cmd[0] + accel_limit;
        }else if (cmd[1] - cmd[0] < -1*accel_limit){
            new_cmd = cmd[0] - accel_limit;
        }
        cmd[1] = new_cmd;
        return new_cmd;
    }

    void integral_limiter(){
        if(integral > integral_limit){
            integral = integral_limit;
        }
    }

    void diff_setter(float present_val){
        diff[0] = diff[1];
        diff[1] = goal - present_val;
    }

    float pid_logic(){
        float manipulated_value;
        integral += (diff[1]+diff[0])/2.0*ctrl_period;//台形積分(扱いやすい)
        manipulated_value =this->Kp*diff[1]+this->Ki*integral+this->Kd*(diff[1]-diff[0])/ctrl_period;
        return manipulated_value;
    }
};