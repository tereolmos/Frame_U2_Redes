#include <Arduino.h>
#line 1 "c:\\Users\\asere\\OneDrive\\Documentos\\Mecatrónica\\8º\\Interfaces y redes industriales\\Redes_Tema 2\\main\\main.ino"
#line 1 "c:\\Users\\asere\\OneDrive\\Documentos\\Mecatrónica\\8º\\Interfaces y redes industriales\\Redes_Tema 2\\main\\main.ino"
void setup();
#line 5 "c:\\Users\\asere\\OneDrive\\Documentos\\Mecatrónica\\8º\\Interfaces y redes industriales\\Redes_Tema 2\\main\\main.ino"
void loop();
#line 3 "c:\\Users\\asere\\OneDrive\\Documentos\\Mecatrónica\\8º\\Interfaces y redes industriales\\Redes_Tema 2\\main\\separacionFrame.ino"
void separarFrame();
#line 1 "c:\\Users\\asere\\OneDrive\\Documentos\\Mecatrónica\\8º\\Interfaces y redes industriales\\Redes_Tema 2\\main\\main.ino"
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);                       // wait for a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);                       // wait for a second
}
#line 1 "c:\\Users\\asere\\OneDrive\\Documentos\\Mecatrónica\\8º\\Interfaces y redes industriales\\Redes_Tema 2\\main\\separacionFrame.ino"
//Funcion para separar el Frame 

void separarFrame() {
  
}

