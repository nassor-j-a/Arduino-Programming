// Define pin numbers for LEDs
  const int redA = 13;
  const int greenA = 12;
  const int redB = 8;
  const int greenB = 2;

  // Define delay time
  const int delayTym = 2000;
  
void setup() {
  // put your setup code here, to run once:
  pinMode(redA, OUTPUT);
  pinMode(greenA, OUTPUT);
  pinMode(redB, OUTPUT);
  pinMode(greenB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(redA, LOW);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, LOW);
  digitalWrite(greenB, LOW);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, LOW);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, LOW);
  digitalWrite(greenB, HIGH);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, LOW);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, LOW);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, LOW);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, HIGH);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, LOW);
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, LOW);
  digitalWrite(greenB, LOW);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, LOW);
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, LOW);
  digitalWrite(greenB, HIGH);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, LOW);
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, LOW);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, LOW);
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, HIGH);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, LOW);
  digitalWrite(greenB, LOW);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, LOW);
  digitalWrite(greenB, HIGH);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, LOW);

  delay(delayTym); // Delay for 1000 milliseconds

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, LOW);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, HIGH);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, LOW);
  digitalWrite(greenB, LOW);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, LOW);
  digitalWrite(greenB, HIGH);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, LOW);

  delay(delayTym); // Delay for 2000 milliseconds

  digitalWrite(redA, HIGH);
  digitalWrite(greenA, HIGH);
  digitalWrite(redB, HIGH);
  digitalWrite(greenB, HIGH);

  delay(delayTym); // Delay for 2000 milliseconds
}
