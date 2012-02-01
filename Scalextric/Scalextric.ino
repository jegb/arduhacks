/*
  Scalextric sketch
 Reads 2 analog inputs on pin 0 & 1 , prints the result to the serial monitor
 and writes to PWM outputs a mapped value to 0-255 (full duty cycle)
 schematic is currently for one input / output. 

 by enrique gallar (c) 2012
 */

const int transOut1 = 9;
const int transOut2 = 10;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); // car 1
  pinMode(14, OUTPUT); // car 2
}

void loop() {
  int sensorValue1 = analogRead(A0); // read thrust car 1
  int sensorValue2 = analogRead(A1); // read thrust car 2
  int outputValue1 = map(sensorValue1, 300, 900, 20, 200); //these were fine tuned using scope
  int outputValue2 = map(sensorValue2, 300, 900, 20, 200);
  analogWrite(transOut1, outputValue1);
  analogWrite(transOut2, outputValue2);
  
  Serial.println(sensorValue1);
}
