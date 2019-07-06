#ifndef REMOCONSERIAL_H
#define REMOCONSERIAL_H
/*
* RemoconSerialライブラリ
* 概要: リモコン->無線機器(送信)~>無線機器(受信)->(ここで値を受け取るためのもの)
* 作成: WisterViolet(@wister_fl)
* ボタン割り当てはREADME.mdに置いておきます.
*/
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
    bool Home = 0; // Nintendo側でいうHOME,DualShock側でいうANALOG
    bool RF = 0;
    bool LF = 0;
    bool P = 0; // チェックサム(LF XOR RF).通信のノイズでLFとRFが変わるのを防ぐはず.
    byte StickL = 0; // Lスティックの角度(0~31)
    byte StickR = 0; // Rスティックの角度(0~31)
    byte AddA = 0; // もしコントローラーの外付けとか.PS4のDualShockだとタッチパッドあたりがいけるかも?
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
/*
* Data0~7に関しては,気にする必要はない.
* DRouteは(受信したデータ, remoconData構造体(上のやつ))の順に引数を取り,決まった場所にデータを入れてくれる.
*/
#endif
