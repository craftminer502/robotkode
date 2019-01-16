#include <ax12.h>

void setup() {
    Serial.begin(9600);
    ax12SetRegister2(1, 32, 50);
    SetPosition(1,0);
    delay(100);
}

void loop() {
    for(int i=0;i<1024;i++) {
        SetPosition(1, i);
          delay(10);
    }

    for(int i=1024;i>0;i--) {
        SetPosition(1,i);
        delay(10);
    }
}
