#include "Arduino.h"
#include "remoconSerial.h"



void Data0(byte d,remoconData *R){
    R->A = !!bitRead(d,4);
    R->B = !!bitRead(d,3);
    R->X = !!bitRead(d,2);
    R->Y = !!bitRead(d,1);
    R->Start = !!bitRead(d,0);
}

void Data1(byte d,remoconData *R){
    R->LEFT = !!bitRead(d,4);
    R->DOWN = !!bitRead(d,3);
    R->UP = !!bitRead(d,2);
    R->RIGHT = !!bitRead(d,1);
    R->Select = !!bitRead(d,0);
}

void Data2(byte d,remoconData *R){
    R->R1 = !!bitRead(d,4);
    R->R2 = !!bitRead(d,3);
    R->L1 = !!bitRead(d,2);
    R->L2 = !!bitRead(d,1);
    R->Home = !!bitRead(d,0);
}

void Data3(byte d,remoconData *R){
    R->R3 = !!bitRead(d,5);
    R->L3 = !!bitRead(d,4);
    R->RF = !!bitRead(d,3);
    R->LF = !!bitRead(d,2);
    R->Start = !!bitRead(d,1);
}

void Data4(byte d,remoconData *R){
    R->StickL = d;
}

void Data5(byte d,remoconData *R){
    R->StickR = d;
}

void Data6(byte d,remoconData *R){
    R->AddA = d;
}

void Data7(byte d,remoconData *R){
    R->AddB = d;
}

void (*SDataf[8])(byte, remoconData *R) = {
    Data0,
    Data1,
    Data2,
    Data3,
    Data4,
    Data5,
    Data6,
    Data7,
};
void DRoute(byte d, remoconData *R){
    SDataf[d & 0b111](d >> 3, R);
}
