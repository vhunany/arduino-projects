int myVoltagePin = A2; // Power source coming from pin A2 
int readValFromPotenti; // back lead
float V2; // voltage across R2 
int delayTime = 250; 
float scale1Kto5V = 5.0/1023.0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  readValFromPotenti = analogRead(myVoltagePin); // backlead voltage 
  V2 = scale1Kto5V * readValFromPotenti;
  Serial.println(V2);
  delay(delayTime);
}

/* Very important: 
Why do we say that V2 is equal to the value read from the output pin (refer to potentiometer Pinout diagram)? 

Why the voltage measurements of this project are referenced to resistor R2? 
The answer is that ALL measurements made by the Arduino input pins are relative to ground, i.e. GND. 
The R2 resistor is connected on the second pin to ground. So the value being measured is between the R1 and R2 connection (the potentiometer wiper) and ground (GND). Refer back to drawn circuit 
Regardless of any circuit complexity to the input on an analog pin of the Arduino, the measured value will be from the input pin to ground.
*/