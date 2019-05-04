#include "Arduino.h"
#include "remoconSerial.h"
void (*Dataf[8])(int) = {
    Data0,
    Data1,
    Data2,
    Data3,
    Data4,
    Data5,
    Data6,
    Data7,
}

void DRoute(byte d){
    Dataf[d & 0b111](d >> 3);
}