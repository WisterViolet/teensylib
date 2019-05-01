#ifndef MOTOR_H
#define MOTOR_H
/*
Motorライブラリ
*/
struct Motor;   // Motorの情報を保存する構造体(.cpp|L3-8)
class TMotor{
    private:
        Motor* motor; 
    public:
        TMotor(int,int,int);
        void run(int);
};
#endif