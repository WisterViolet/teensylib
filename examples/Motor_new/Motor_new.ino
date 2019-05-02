#include<Motor_new.h>

Motor_new m(17, 23);

void setup(){

}

void loop(){
    m.run(100);
    delay(500);
    m.run(-100);
    delay(500);
}