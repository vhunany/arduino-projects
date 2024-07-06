// declaring our variables 
int readPin = A3; 
int readVal;
float V2 = 0; // initalize to a float so that when we do float division, we store our V2 as a float
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:
  pinMode(readPin, INPUT);
  Serial.begin(9600); // setting up the serial moniter to print something on it
}

void loop() {
  // put your main code here, to run repeatedly:
  readVal = analogRead(readPin);
  // calculating voltage
  V2 = (5./1023.) * readVal; // must put as decimals or else arduino interprets 5 and 1023 as ints and thus does int division which will be 0
  Serial.println(V2);

  delay(delayTime);
}
