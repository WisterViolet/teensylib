#ifndef CAN_H
#define CAN_H
typedef struct _CANmsg{
    byte body[8];
    int id;
}CANmsg;
const int CANlength = 8;
void send(CANmsg *m);
inline void send(CANmsg m){
    send(&m);
}
#endif