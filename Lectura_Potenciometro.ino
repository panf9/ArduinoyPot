
byte pot = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  pot += 5;
  Serial.println(pot);
  delay(1000);  
}
