#include <ESP32Servo.h>

Servo miServo;  // Crear el objeto para controlar el servo

// Definir el pin GPIO al que está conectado el cable de señal del servo
const int pinServo = 18; 

void setup() {
  Serial.begin(115200); 
  delay(1000);          // Pequeña pausa para que abra el puerto serie
  
  // Adjuntar el servo al pin 
  miServo.attach(pinServo);
}

void loop() {
  // Posición 0 grados
  Serial.println("Moviendo a: 0 grados");
  miServo.write(0);
  delay(3000); // 3 segundos para observar el cero

  // Posición 90 grados (centro)
  Serial.println("Moviendo a: 90 grados");
  miServo.write(90);
  delay(3000); // 3 segundos para observar el centro

  // Posición 180 grados
  Serial.println("Moviendo a: 180 grados");
  miServo.write(180);
  delay(3000); // 3 segundos para observar el extremo opuesto
}
