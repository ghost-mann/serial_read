#include <Arduino.h>
#include "serial_read.h"

int analog_ledPin = 9;
int brightness = 0;

void analog_serial_setup() {
    pinMode(analog_ledPin,OUTPUT);
    Serial.begin(9600);
}

void analog_serial_loop() {
    if (Serial.available() > 0) {
        brightness = Serial.parseInt();
    }
}