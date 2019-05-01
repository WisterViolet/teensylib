#include "Arduino.h"
#include "Motor_old.h"

struct TMotor_old{
    int F;
    int R;
    int pwm;
    int speed;
};

Motor_old::Motor_old(int F, int R, int pwm){
    motor->F = F;
    motor->R = R;
    motor->pwm = pwm;
    motor->speed = 0;
    pinMode(motor->F, OUTPUT);
    pinMode(motor->R, OUTPUT);
    pinMode(motor->pwm, OUTPUT);
}

void Motor_old::run(int speed){
    motor->speed = speed;
    if(motor->speed < 0){
        motor->speed = (-1)*motor->speed;
        digitalWrite(motor->F, LOW);
        digitalWrite(motor->R, HIGH);
    }
    else if(motor->speed > 0){
        digitalWrite(motor->R, LOW);
        digitalWrite(motor->F, HIGH);
    }
    else{
        digitalWrite(motor->R, LOW);
        digitalWrite(motor->F, LOW);        
    }
    analogWrite(motor->pwm, speed);
}
