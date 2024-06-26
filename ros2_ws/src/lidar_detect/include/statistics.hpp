#pragma once

#include <iostream>
#include <vector>
#include <cmath>
#include <stdio.h>

using namespace std;

class BasicStatistics{

public:
    //平均を計算
    float average(vector<float> &f, int N){

        float ave = 0.0;

        for(int i = 0; i < N; i++) {
            ave += f[i]/(float)N;
        }

        return ave;
    }

    //2乗の平均を計算
    float average2(vector<float> &f, int N){

        float ave2 = 0.0;

        for(int i = 0; i < N; i++){
            ave2 += f[i]*f[i]/(float)N;
        }

        return ave2;
    }

    //標準偏差を計算
    float variance(vector<float> &f, int N){

        float ave  = average(f, N);
        float ave2 = average2(f, N);

        float var = ave2 - ave*ave;

        return var;
    }

    //共分散を計算
    float covariance(vector<float> &f, vector<float> &g, int N){

        float cov = 0.0;

        for(int i = 0; i < N; i++){
            cov += f[i]*g[i]/(float)N;
        }
        
        cov -= average(f, N) * average(g, N);

        return cov;
    }

};

class LeastSquaresMethod : public BasicStatistics{

public:
    float x_var_threshold = 0.0001;
    //y = slope * x + intercept
    float slope(vector<float> &x, vector<float> &y, int N){

        float a = 0.0;
        float x_var = variance(x, N);
        float cov   = covariance(x, y, N);
        //分母が0に近づくときの処理
        if(x_var <= 0.00004){
            if(cov >= 0){
                a = 40;
            }else{
                a = -40;
            }
        }else{
            

            a = cov / x_var;
        }

        return a;
    }

    float intercept(vector<float> &x, vector<float> &y, int N){

        float b = 0.0;
        float x_var = variance(x, N);
        float cov   = covariance(x, y, N);
        float x_ave = average(x, N);
        float y_ave = average(y, N);
        if(x_var <= 0.00004){
            if(cov >= 0){
                b = y_ave - (40.0) * x_ave;
            }else{
                b = y_ave - (-40.0) * x_ave;
            }
           
        }else{
            
            

            b = y_ave - (cov / x_var) * x_ave;
        }

        return b;
    }

    //coef_x * x + coef_y * y + constant = 0
    float coef_x(vector<float> &x, vector<float> &y, int N){
        float x_var = variance(x, N);
        
        if(x_var <= x_var_threshold){
            return 1;
        }else{
            float cov   = covariance(x, y, N);
            return -1.0*cov;
        }
    }

    float coef_y(vector<float> &x, vector<float> &y, int N){
        float x_var = variance(x, N);
        if(x_var <= x_var_threshold){
            return 0.0;
        }else{
            return x_var;
        }
    }

    float constant(vector<float> &x, vector<float> &y, int N){
        float x_var = variance(x, N);
        if(x_var <= x_var_threshold){
            float x_ave = average(x, N);

            return -1.0*x_ave;
        }else{
            float cov   = covariance(x, y, N);
            float x_ave = average(x, N);
            float y_ave = average(y, N);

            return cov*x_ave - x_var*y_ave;
        }
    }

    vector<float> predict(vector<float> &x , int N, float a, float b, float c){
        vector<float> y;
        for(int i = 0; i < N; i++){
            y.push_back(-1.0*(a*x[i] + c)/b);
        }
        return y;
    }

    float coef_det(vector<float> &x, vector<float> &data,vector<float> &pred, int N){
        float sum_var = 0.0;
        float residuals_var = 0.0;
        float y_ave = average(data, N);

        for(int i = 0; i < N; i++){
            sum_var += (data[i]-y_ave)*(data[i]-y_ave);
            residuals_var += (data[i]-pred[i])*(data[i]-pred[i]);
        }

        return 1.0 - residuals_var/sum_var;
    }
       
};

float dist_line_point(float a, float b, float c, float x, float y){
    return abs(a*x + b*y + c)/sqrt(a*a + b*b);
}

float signed_dist_line_point(float a, float b, float c, float x, float y){
    return (a*x + b*y + c)/sqrt(a*a + b*b);
}