#include "Arduino.h"
#include "Motor_old.h"

void Motor_old::init(int f, int r, int pp){
    FPin = f;
    RPin = r;
    pwmPin = pp;
    speedV = 0;
    pinMode(FPin, OUTPUT);
    pinMode(RPin, OUTPUT);
    pinMode(pwmPin, OUTPUT);
}

void Motor_old::run(int s){
    speedV = s;
    if(speedV < 0){
        speedV = (-1)*speedV;
        digitalWrite(FPin, LOW);
        digitalWrite(RPin, HIGH);
    }
    else if(speedV > 0){
        digitalWrite(RPin, LOW);
        digitalWrite(FPin, HIGH);
    }
    else{
        digitalWrite(RPin, LOW);
        digitalWrite(FPin, LOW);        
    }
    analogWrite(pwmPin, speedV);
}
