#ifndef MOTOR_H
#define MOTOR_H
/*
Motorライブラリ
*/
struct TMotor_old;   // Motorの情報を保存する構造体(.cpp|L3-8)
class Motor_old{
    private:
        TMotor_old* motor; 
    public:
        Motor_old(int,int,int);
        void run(int);
};
#endif