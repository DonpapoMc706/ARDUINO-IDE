#include <Arduino.h>
int pinLedRojo = 25;
int pinBotonReset = 54;
int estadoBotonReset = 1;
int pinLedVerde = 26;
int pinBotonAlarma = 55;
int estadoBotonAlarma = 1;
int estadoAlarma = 0;
void setup () {


  pinMode(pinLedRojo, OUTPUT);
  pinMode(pinBotonReset, INPUT_PULLUP);
  Serial.begin(9600);
  pinMode(pinLedVerde, OUTPUT);
  pinMode(pinBotonAlarma, INPUT_PULLUP);
  digitalWrite(pinLedVerde, HIGH);
}

void loop () {
 estadoBotonReset = digitalRead(pinBotonReset);
    if (estadoBotonReset == LOW) {
        estadoAlarma = 0;
    }
estadoBotonAlarma = digitalRead(pinBotonAlarma);
    if (estadoBotonAlarma == LOW) {
        estadoAlarma = 1;
    }
  if (estadoAlarma == 0) {
    digitalWrite(pinLedVerde, LOW);
    digitalWrite(pinLedRojo, HIGH);
    delay(150);
  } else {
    digitalWrite(pinLedRojo, LOW);
    delay(150);
    digitalWrite(pinLedVerde, HIGH);

    
  }
  
}  
