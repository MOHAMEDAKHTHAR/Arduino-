int ldrPin = A3;        
int irPin = 2;         
int relayPin = 7;        

int lightThreshold = 300; 

void setup() {
  pinMode(irPin, INPUT);
  pinMode(relayPin, OUTPUT);
  digitalWrite(relayPin, LOW);  
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  int irValue = digitalRead(irPin);

  Serial.print("LDR: ");
  Serial.print(ldrValue);
  Serial.print(" | IR: ");
  Serial.println(irValue);

  if (ldrValue < lightThreshold && irValue == HIGH) {
    digitalWrite(relayPin, HIGH);
  }
   else 
   {
    digitalWrite(relayPin, LOW); 
  }

  delay(200);
}