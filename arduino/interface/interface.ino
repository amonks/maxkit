/*
  Analog Input
 Demonstrates analog input by reading an analog sensor on analog pin 0 and
 turning on and off a light emitting diode(LED)  connected to digital pin 13. 
 The amount of time the LED will be on and off depends on
 the value obtained by analogRead(). 
 
 The circuit:
 * Potentiometer attached to analog input 0
 * center pin of the potentiometer to the analog pin
 * one side pin (either one) to ground
 * the other side pin to +5V
 * LED anode (long leg) attached to digital output 13
 * LED cathode (short leg) attached to ground
 
 * Note: because most Arduinos have a built-in LED attached 
 to pin 13 on the board, the LED is optional.
 
 
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe
 
 This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/AnalogInput
 
 */

int sensorPin0 = A0;    // select input pins
int sensorPin1 = A1;    // 
int sensorPin2 = A2;    // 
int sensorPin3 = A3;    // 
int sensorPin4 = A4;    // 
int sensorPin5 = A5;    // 


int sensorValue0 = 0;   // set pin values to 0
int sensorValue1 = 0;   // 
int sensorValue2 = 0;   // 
int sensorValue3 = 0;   // 
int sensorValue4 = 0;   // 
int sensorValue5 = 0;   // 

void setup() {
  Serial.begin(9600);   // start serial connection at 9600   
}

void loop() {

  sensorValue0 = analogRead(sensorPin0);  // read input values
  sensorValue1 = analogRead(sensorPin1);    
  sensorValue2 = analogRead(sensorPin2);    
  sensorValue3 = analogRead(sensorPin3);    
  sensorValue4 = analogRead(sensorPin4);    
  sensorValue5 = analogRead(sensorPin5);    
  
  Serial.print(sensorValue0); // print list of input values to serial port
  Serial.print(" ");
  Serial.print(sensorValue1);
  Serial.print(" ");
  Serial.print(sensorValue2);
  Serial.print(" ");
  Serial.print(sensorValue3);
  Serial.print(" ");
  Serial.print(sensorValue4);
  Serial.print(" ");
  Serial.println(sensorValue5);
  
  delay(50);                  
}
