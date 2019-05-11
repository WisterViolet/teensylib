#ifndef REMOCONSERIAL_H
#define REMOCONSERIAL_H
struct remoconData{
    bool A = 0;
    bool B = 0;
    bool X = 0;
    bool Y = 0;
    bool UP = 0;
    bool DOWN = 0;
    bool RIGHT = 0;
    bool LEFT = 0;
    bool R1 = 0;
    bool R2 = 0;
    bool R3 = 0;
    bool L1 = 0;
    bool L2 = 0;
    bool L3 = 0;
    bool Start = 0;
    bool Select = 0;
    bool Home = 0;
    bool RF = 0;
    bool LF = 0;
    bool P = 0;
    byte StickL = 0;
    byte StickR = 0;
    byte AddA = 0;
    byte AddB = 0;
};
void Data0(byte, remoconData*);
void Data1(byte, remoconData*);
void Data2(byte, remoconData*);
void Data3(byte, remoconData*);
void Data4(byte, remoconData*);
void Data5(byte, remoconData*);
void Data6(byte, remoconData*);
void Data7(byte, remoconData*);
void DRoute(byte, remoconData*);
#endif
