#include "Arduino.h"
#include "Motor_new.h"

struct TMotor_new{
    int Lock;
    int pwm;
    int speed;
};

Motor_new::Motor_new(int L, int pwm){
    motor->Lock = L;
    motor->pwm = pwm;
    motor->speed = 127;
    pinMode(motor->Lock, OUTPUT);
    pinMode(motor->pwm, OUTPUT);
    digitalWrite(motor->Lock, LOW);
    analogWrite(motor->pwm, motor->speed);
}

void Motor_old::run(int speed){
    motor->speed = speed+128;
    analogWrite(motor->pwm, speed);
}