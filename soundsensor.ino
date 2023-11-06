const int soundSensorPin = 7; // Connect the sound sensor to digital pin 2cons
const int buzzer=6;

void setup() {
  pinMode(soundSensorPin, INPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}

void loop() {
 int soundState = digitalRead(soundSensorPin);

  if(soundState == HIGH) {
    Serial.println("Sound Detected!");
    // You can add your own logic here when sound is detected.
  }
  else{
    Serial.println("sound not detected");
  }
  if(soundState == HIGH){
    digitalWrite(buzzer,HIGH);
  }
  else
  {
    digitalWrite(buzzer,LOW);
  }
  // You can add more code here for other tasks.
  delay(1000);
}
