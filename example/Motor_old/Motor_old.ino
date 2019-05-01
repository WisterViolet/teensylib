#include<Motor_old.h>

TMotor m(21,22,23);
// TMotor need (Fpin,Rpin,PWMpin) to Initial

void setup(){

}

void loop(){
    m.run(100);
    // Set speed(-256~256) Forward(1~256) Reverse(-256~-1) Stop(0)
}