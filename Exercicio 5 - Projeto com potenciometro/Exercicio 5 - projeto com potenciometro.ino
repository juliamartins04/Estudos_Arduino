const int led = 3;
const int pinPotentiometer = A0;

int readValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(led, OUTPUT);
}

void loop() {
  readValue = analogRead(pinPotentiometer);
  Serial.println(readValue);
}
