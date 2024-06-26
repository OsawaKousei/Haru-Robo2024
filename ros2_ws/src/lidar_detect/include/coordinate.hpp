#pragma once

#include <iostream>
#include <math.h>

class Coordinate{
    public:
    Coordinate(){
        
    }

    static float deg_to_rad(double deg){
        return deg * M_PI / 180;
    }

    static float rad_to_deg(double rad){
        return rad * 180 / M_PI;
    }

    static void xy_to_polar(double x, double y, double &r, double &theta){
        r = sqrt(x*x + y*y);
        theta = atan2(y, x);
    }

    static void polar_to_xy(double r, double theta, double &x, double &y){
        x = r * cos(theta);
        y = r * sin(theta);
    }

    static double get_rotate_error(double a, double b, double c){
        double error = atan(-1*b/a);

        return error;
    }
    
    private:
    
};
