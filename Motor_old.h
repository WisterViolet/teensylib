#ifndef MOTOR_H
#define MOTOR_H
/*
Motorライブラリ
作成: WisterViolet(@wister_fl)
使い方はREADME.mdにも置いておきます.
*/
class Motor_old{
    private:
        int FPin;
        int RPin;
        int pwmPin;
        int speedV;
    public:
        void init(int f,int r,int pp);
        // モーターの初期化をする関数. (Fに割り当てるピン, Rに割り当てるピン, PWMに割り当てるピン)の順に引数を取る.
        void run(int s);
        // モーターを-255~255の範囲で回す. s<0の時は逆転,s>0の時は正転,s=0で停止(きちんと止めたい場合short_brakeを使うほうが賢明).
        void short_brake(bool f);
        // モーターのショートブレーキ切り替えを行う. f=true(または1)でショートブレーキがかかる. f=false(または0)で解かれるが実はrunでも解かれる
};
#endif
