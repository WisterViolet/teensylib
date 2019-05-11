#include "remoconSerial.h"

remoconData RD;

void setup(){
    Serial.begin(115200);
    Serial1.begin(115200);
}


void loop(){
    if(Serial1.available() > 0){
        byte d = Serial1.read();
        Serial.print(d & 0b111, BIN); Serial.print(":"); Serial.println(d >> 3,BIN);
        DRoute(d, &RD);
        Serial.print("Select:"); Serial.println(RD.Select,BIN);
    }
}
