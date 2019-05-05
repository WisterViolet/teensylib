#include<remoconSerial.h>

struct remoconData
{
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    int E = 0;
    int F = 0;
    int G = 0;
    int H = 0;
};

remoconData DT;

extern void Data0(int n){
    DT.A=n;
}

extern void Data1(int n){
    DT.B=n;
}

extern void Data2(int n){
    DT.C=n;
}

extern void Data3(int n){
    DT.D=n;
}

extern void Data4(int n){
    DT.E=n;
}

extern void Data5(int n){
    DT.F=n;
}

extern void Data6(int n){
    DT.G=n;
}

extern void Data7(int n){
    DT.H=n;
}

void setup(){
    Serial.begin(9600);
}


void loop(){
    while(Serial.available() > 0){
        DRoute(Serial.read());
    }
    Serial.print("A:");
    Serial.print(DT.A, BIN);
    Serial.print("B:");
    Serial.print(DT.B, BIN);
    Serial.print("C:");
    Serial.print(DT.C, BIN);
    Serial.print("D:");
    Serial.print(DT.D, BIN);
    Serial.print("E:");
    Serial.print(DT.E, BIN);
    Serial.print("F:");
    Serial.print(DT.F, BIN);
    Serial.print("G:");
    Serial.print(DT.G, BIN);
    Serial.print("H:");
    Serial.print(DT.H, BIN);
}
