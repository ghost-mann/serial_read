#include <Arduino.h>
#include "serial_read.h"

const int ledPin = 9;
int incomingByte = 0;

void setup() {
  analog_serial_setup();
}

void loop() {
  analog_serial_loop();

}
