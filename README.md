# teensylib
## 概要
部活でTeensy3.x用に作ったライブラリです。

命名規則がへたくそなので修正予定

## 導入方法
一般的なライブラリのインポート方法を参照してください。

## 使い方
### Motor_old
正転、逆転、PWM、GNDの情報を受け取ってモーターの制御を置こなうMD用のライブラリ

- `class Motor_old`: モーターのピン情報と関数群が入ったclass
    - `void init(int f, int r, int pp)`: モーターのピン設定を置こなう関数。(F割り当てピン, R割り当て, PWM割り当てピン)の順に引数を取る。
    - `void run(int s)`: モーターを-255~255の範囲で回す関数。s&lt;0で逆転、s&gt;0で正転する。
    - `void short_brake(bool f)`: モーターにショートブレーキをかける関数、FとRのピンをHIGHにすることで実現してるので対応してない場合は使用禁止。f=1(true)でショートブレーキがかかり、f=0(false)でショートブレーキが解かれる。

### remoconSerial
メインのマイコンでリモコンのデータを受信するときに使うライブラリ。

#### 通信について
通信形式はSerial(UART)を用いる。

送られてくるボタンのデータは8Byteで以下の構造を想定している。

|バイト(HSB)\ビット(HSB)|0|1|2|3|4|5~7(フッタ)|
|:------------------------------:|:-:|:-:|:-:|:-:|:-:|:----------:|
|0|A(〇)|B(×)|X(△)|Y(□)|+(START)|000|
|1|←|↓|↑|→|-(SELECT)|001|
|2|R|ZR(R2)|L|ZL(L2)|HOME(ANALOG)|010|
|3|R3|L3|RF|LF|P|011|
|4|a|a|a|a|a|100|
|5|b|b|b|b|b|101|
|6|c|c|c|c|c|110|
|7|d|d|d|d|d|111|

- RF,LF: Rスティック、Lスティックが倒れているかのフラグ
- P: `RF xor LF`。使いたい人用のチェックサム
- a,b: それぞれLスティック、Rスティックの角度
- c,d: 追加で実装したボタンなどに割り当てる(通常は0)

#### 関数群
- `void Data0~7`: Dataを構造体に突っ込むための関数、これを直接たたくことはほとんどない。
- `void DRoute(byte, remoconData*)`: (受信したデータ, 構造体**のアドレス**)の順に引数をとる。受信したデータのフッタを参照し、対応した`Data0~7`を呼び出す。
