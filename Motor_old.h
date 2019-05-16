#ifndef MOTOR_H
#define MOTOR_H
/*
Motorライブラリ
*/
class Motor_old{
    private:
        int FPin;
        int RPin;
        int pwmPin;
        int speedV;
    public:
        void init(int,int,int);
        void run(int);
};
#endif
