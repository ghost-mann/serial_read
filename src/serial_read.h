#ifndef SERIAL_READ_H
#define SERIAL_REAL_H

extern int digital_ledPin;
extern int analog_ledPin;

void digital_serial_setup();
void analog_serial_setup();

void digital_serial_loop();
void analog_serial_loop();

#endif