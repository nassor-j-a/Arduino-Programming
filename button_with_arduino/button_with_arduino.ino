int ledPin = 12;
int btnPin = 2;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(btnPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  //if the button is pressed, turn the LED on
  if(digitalRead(btnPin) == HIGH){
    digitalWrite(ledPin, HIGH); 
  }
  //else, if the button is not pressed turn the LED off 
  
  else{
    digitalWrite(ledPin, LOW);
  }
  
}
