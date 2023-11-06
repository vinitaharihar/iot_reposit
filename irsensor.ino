int irSensorPin = 9; 

void setup() {
  Serial.begin(9600); 
  pinMode(irSensorPin, INPUT); 
}
void loop() {
  int sensorValue = digitalRead(irSensorPin); 
  
  if (sensorValue == LOW) {
    Serial.println("Object Detected"); 
  } else {
    Serial.println("No Object Detected");
  }

  delay(1000); 
}




