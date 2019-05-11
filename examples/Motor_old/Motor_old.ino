#include "Motor_old.h"

Motor_old m(21,22,23);

void setup(){
}

void loop(){
    for(int i = -255;i < 256;i++){
      m.run(i);
    }
}
