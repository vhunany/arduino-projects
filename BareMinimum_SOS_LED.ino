int myPin = 12;

int delayAfterMessage = 3000;

int dit = 250;
 
int dah = 700;

void setup() {
  // put your setup code here, to run once:
  pinMode(myPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int x = 0; x < 3; x++) { 
    digitalWrite(myPin, HIGH);
    delay(dit);
    digitalWrite(myPin, LOW);
    delay(dit);
  }
  for (int x = 0; x < 3; x++) { 
      digitalWrite(myPin, HIGH);
      delay(dah);
      digitalWrite(myPin, LOW);
      delay(dah);
    }
  for (int x = 0; x < 3; x++) { 
      digitalWrite(myPin, HIGH);
      delay(dit);
      digitalWrite(myPin, LOW);
      delay(dit);
    }

  delay(delayAfterMessage);

}
