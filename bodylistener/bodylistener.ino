int electret1;
void setup() {
  Serial.begin(9600); //set baud rate
  //set pins attached to LEDs as outputs
  pinMode(6,OUTPUT);

void loop() {
  electret1 = analogRead(5); //set VU as value of pin A5 reading

  if (electret1 > 300) {
    digitalWrite(6 , HIGH)
  } else {
    digitalWrite(6 , LOW)
  }
}
