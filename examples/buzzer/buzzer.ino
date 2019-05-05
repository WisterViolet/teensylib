#include<buzzer.h>

int outPin = 8;

void setup(){
    pinMode(outPin, OUTPUT);
}

void loop(){
    toneInit(outPin, C);
    delay(1000);
    toneInit(outPin, AS);
    delay(1000);
    toneInit(outPin, 2000);
    delay(1000);
}