void setup() { // commands put in here will be executed once
  // put your setup code here, to run once:
  
  // pin 13 ia already hooked up an LED on the board
  // so we are going to use pin 13 to program it to do things with the led
  pinMode(13, OUTPUT); // pinMode has two parameters, the pin you are using and what this pin will be used for (output or input)
}

void loop() { // repeated commands put here
  // put your main code here, to run repeatedly:
  digitalWrite(13, HIGH); // sending a signal to pin
  // digitalWrite takes 2 parameters, the pin # and if you want it to be turned on or off (HIGH or LOW)
  delay(500); // 1 parameter (how many milliseconds)
  digitalWrite(13, LOW); 
  delay(100);
}

// to send the program to the arduino, click the arrow at the top left corner

