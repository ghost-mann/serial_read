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

    if (brightness < 0) brightness = 0;
    if (brightness > 255) brightness = 255;

    analogWrite(analog_ledPin, brightness);

    Serial.print("Brightness level: ");
    Serial.println(brightness);

}