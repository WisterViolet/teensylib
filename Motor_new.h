#ifndef MOTOR_NEW_H
#define MOTOR_NEW_H
/*
Motorライブラリ
*/
struct TMotor_new;   // Motorの情報を保存する構造体(.cpp|L4-8)
class Motor_new{
    private:
        TMotor_new* motor; 
    public:
        Motor_new(int,int);
        void run(int);
};
#endif