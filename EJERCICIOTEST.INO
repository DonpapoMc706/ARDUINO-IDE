#include <Arduino.h>
int pinLedRojo = 25;
int pinBotonReset = 54;
int estadoBotonReset = 1;
int estadoPinLedRojo = 0;
int pinLedVerde = 26;
int estadoPinLedVerde = 0;
int pinBotonAlarma = 55;
int estadoBotonAlarma = 1;
void setup () {


  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinBotonReset, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinBotonAlarma, INPUT_PULLUP);
}

void loop () {
 estadoBotonReset = digitalRead(pinBotonReset);
    if (estadoBotonReset == LOW) {
        estadoPinLedRojo = !estadoPinLedVerde;
        digitalWrite(pinLedRojo, estadoPinLedVerde);
estadoBotonAlarma = digitalRead(pinBotonAlarma);
    if (estadoBotonAlarma == LOW) {
        estadoPinLedVerde = !estadoBotonAlarma;
        digitalWrite(pinLedRojo, estadoPinLedRojo);
    }

    delay(500); // Debounce delay
  }
}  
