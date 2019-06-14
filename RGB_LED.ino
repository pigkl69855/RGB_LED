const int Led1 = 7;
const int Led2 = 53;

const int redPin = 48;
const int greenPin = 46;
const int bluePin = 44;

void setup() {

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(Led1, OUTPUT);
  pinMode(Led2, OUTPUT);
}
void loop() {

  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, LOW);
  setColor(255,0,0);
  delay(600);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, HIGH);
  setColor(0,255,0);
  delay(600);

  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, LOW);
  setColor(0,0,255);
  delay(600);
  digitalWrite(Led1, LOW);
  digitalWrite(Led2, HIGH);
  setColor(255,255,255);
  delay(600);

  digitalWrite(Led1, HIGH);
  digitalWrite(Led2, LOW);
  setColor(170,0,255);
  delay(600);

}
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
  //setColor(255,0,0);     red
  //setColor(0,255,0);     green
  //setColor(0,0,255);     blue
  //setColor(255,255,255); white
  //setColor(170,0,255);   purple
}
