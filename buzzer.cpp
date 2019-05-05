#include "Arduino.h"
#include "buzzer.h"
void toneInit(int pin, TONE T){
    tone(pin, T);
}

void toneInit(int pin, int pulse){
    tone(pin, pulse);
}