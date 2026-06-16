#define ldrPin A0

void setup() {
  Serial.begin(9600);
}

void loop() {
 
  int lightLevel = analogRead(ldrPin);
  Serial.print("Light Intensity: ");
  Serial.println(lightLevel);

  delay(500);
}