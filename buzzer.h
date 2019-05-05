#ifndef BUZZER_H
#define BUZZER_H
enum TONE{
    C = 523,
    CS = 554,
    D = 587,
    DS = 622,
    E = 659,
    F = 698,
    FS = 739,
    G = 784,
    GS = 831,
    A = 880,
    AS = 932,
    B = 988,
    HC = 1046,
};
void toneInit(int, TONE);
void toneInit(int, int);
#endif