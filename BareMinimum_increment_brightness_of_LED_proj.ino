int redLedPin = 3;
int brightness = 0;
int delay_time = 500;
int numOfIncrements = 10;

void setup() {
  // put your setup code here, to run once:
  // digitalWrite worked with any pin from 2-13
  // if we want to change the voltage from anything from 0-5 we use analogWrite (the pins with the squiggle)
  pinMode(redLedPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  // analogWrite(redLedPin, brightness); // Before we said HIGH or LOW but now you can put in between values
  // This second parameter is a number from 0 V - 255 (5 V)
  // Max brightness == 255 is the same thing as digitalWrite HIGH

  for (int i = 0; i < numOfIncrements; i++) {
    analogWrite(redLedPin, brightness);
    brightness++;               // Increment brightness
    brightness = brightness * 2; // Double the brightness
    if (brightness > 255) {      // Ensure brightness does not exceed 255
      brightness = 255;
    }
    delay(delay_time);
  }

  // Reset brightness to 0 after reaching max increments
  brightness = 0;
  delay(delay_time);
}