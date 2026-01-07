#include <Arduino.h>
#include "serial_read.h"

int digital_ledPin = 9;
int infoByte = 0;

void digital_serial_setup() {
    pinMode(digital_ledPin,OUTPUT);
    Serial.begin(9600);
}

void digital_serial_loop() {
    if (Serial.available() > 0) {
        infoByte = Serial.read();
    }
    if (infoByte == '0') {
        digitalWrite(digital_ledPin,LOW);
    } else if (infoByte == '1') {
        digitalWrite(digital_ledPin,HIGH);
    }

    Serial.print("You've entered: ");
    Serial.println(infoByte, DEC);
}