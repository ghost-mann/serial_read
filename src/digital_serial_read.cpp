#include <Arduino.h>
#include "serial_read.h"

int digital_ledPin = 9;
int infoByte = 0;

void digital_serial_setup() {
    pinMode(digital_ledPin,OUTPUT);
    Serial.begin(9600);
}