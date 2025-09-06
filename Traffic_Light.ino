//Initialization of different PINs
const int red = 13;
const int yellow = 12;
const int green = 11;
const int blue = 10;
const int btnPin = 2;
int btnState = 0;

//Defining which PIN is for Input and Output
void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(2, INPUT_PULLUP);
}

//Implementation of logic
void loop() {
  btnState = digitalRead(btnPin);
  if(btnState == LOW){
    digitalWrite(blue, HIGH);
    digitalWrite(red, HIGH);
    delay(4000);
    digitalWrite(blue, LOW);
    digitalWrite(red, LOW);
  }
  else{
    digitalWrite(yellow, HIGH);
    delay(2000);
    digitalWrite(yellow, LOW);
    digitalWrite(green, HIGH);
    delay(6000);
    digitalWrite(green, LOW);
    digitalWrite(red, HIGH);
    delay(2000);
    digitalWrite(red, LOW);
  }
}
