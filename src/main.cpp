#include <Arduino.h>
#include "serial_read.h"

const int ledPin = 9;
int incomingByte = 0;

void setup() {
  digital_serial_setup();
}

void loop() {
  digital_serial_loop();

}
