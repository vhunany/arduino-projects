int redPin = 2;
int bluePin = 7;
int greenPin = 9; 
int yellowPin = 12; 
int waitTime = 1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  // Display 0000 = 0 
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);

  delay(waitTime);

  // Display 0001 = 1
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);

  delay(waitTime);

  // Display 0010 = 2 
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);

  delay(waitTime);

  // Display 0011 = 3 
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, HIGH);

  delay(waitTime);

  // Display 0100 = 4 
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);

  delay(waitTime);

  // Display 0101 = 5 
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);

  delay(waitTime);

  // Display 0110 = 6 
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);

  delay(waitTime);

  // Display 0111 = 7 
  digitalWrite(redPin, LOW);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, HIGH);

  delay(waitTime);

  // Display 1000 = 8 
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);

  delay(waitTime);

  // Display 1001 = 9 
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);

  delay(waitTime);

  // Display 1010 = 10 
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);

  delay(waitTime);

  // Display 1011 = 11 
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, HIGH);

  delay(waitTime);

  // Display 1100 = 12 
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, LOW);

  delay(waitTime);

  // Display 1101 = 13 
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(yellowPin, HIGH);

  delay(waitTime);

  // Display 1110 = 14 
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, LOW);

  delay(waitTime);

  // Display 1111 = 15 
  digitalWrite(redPin, HIGH);
  digitalWrite(bluePin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(yellowPin, HIGH);

  delay(waitTime);
}
