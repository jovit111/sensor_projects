const int ldr = A0;
const int led = 9;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(ldr);
  Serial.println(value);

  if (value < 500)
    digitalWrite(led, HIGH);
  else
    digitalWrite(led, LOW);

  delay(200);
}