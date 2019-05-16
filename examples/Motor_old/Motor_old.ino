#include "Motor_old.h"

Motor_old m;

void setup(){
  m.init(21,23,22);
}

void loop(){
    for(int i = 0;i < 500;i++){
      m.run(i-250);
      delay(10);
    }
}
