#define irSensorPin 0
#define buzzerPin 2    
void setup() 
{
  pinMode(irSensorPin, INPUT); 
  pinMode(buzzerPin, OUTPUT);       
  Serial.begin(9600);         
}

void loop() {
  int sensorValue = digitalRead(irSensorPin);

  if (sensorValue == HIGH) {
    Serial.println("Object Detected!");
    digitalWrite(buzzerPin, HIGH);
  } else {
    Serial.println("No Object");
    digitalWrite(buzzerPin, LOW); 
  }
  delay(500);
}
