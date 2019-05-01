#include<Motor_old.h>

TMotor m(21,22,23);
// (Fpin,Rpin,PWMpin)の順に入れてください

void setup(){

}

void loop(){
    m.run(100);
    // スピードは-256~256の範囲で決められます.+で正転,-で逆転です.
}