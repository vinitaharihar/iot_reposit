int ldr_sensor=5;
int led=42;
void setup() {
 pinMode(ldr_sensor,INPUT);
 //pinMode(led,OUTPUT);
}
void loop()
{
int data = analogRead(ldr_sensor);
if(data<=400)
{
  digitalWrite(led, HIGH);
}
else
{
  digitalWrite(led, LOW);
}
Serial.println(data);
}