#include <Servo.h> // librería necesaria para el funcionamiento del servo
Servo myservo; // Habilita el servo
int boton = 2; // variable donde se conecta el botón
int eleccion; // variable donde se almacena el número random


void setup() {
  myservo.attach(9); // Conecta el servo al pin 9
  pinMode(boton, INPUT_PULLUP); // Configura el pin del botón como entrada
}


void loop() {
  boton = digitalRead(2); // lee el botón
  if (boton == 0) { // Si el botón está presionado
    myservo.write(0); // lleva el servomotor a 0°
    delay(300);
    eleccion = random(1, 5); // elige un número al azar entre 1 y 4

    if (eleccion == 1) {
      myservo.write(30); // Si es 1 lleva el servomotor a 30°
      delay(300);
    }


    if (eleccion == 2) {
      myservo.write(70); // Si es 2 lleva el servomotor a 70°
      delay(300);
    }


    if (eleccion == 3) {
      myservo.write(120); // Si es 3 lleva el servomotor a 120°
      delay(300);
    }


    if (eleccion == 4) {
      myservo.write(170); // Si es 4 lleva el servomotor a 170°
      delay(300);
    }

   delay(3000);
  }
}
