#include <Arduino.h>
int pinLedRojo = 25;
int pinBotonReset = 54;
bool estadoBotonReset = 1;
bool estadoPinLedRojo = 0;


void setup () {


  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinBotonReset, INPUT_PULLUP);
}


void loop () {
  estadoBotonReset = digitalRead(pinBotonReset);
  if (estadoBotonReset == LOW) {
    estadoPinLedRojo = !estadoPinLedRojo;
    digitalWrite(pinLedRojo, estadoPinLedRojo);
    delay(500); // Debounce delay
  }
}
