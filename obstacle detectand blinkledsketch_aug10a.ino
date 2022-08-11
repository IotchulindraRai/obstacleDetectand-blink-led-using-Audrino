int trigpin= 9;
int echopin=10;
int led= 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(led,OUTPUT);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);

}
void loop() {
  // put your main code here, to run repeatedly:
long duration,distance;
digitalWrite(trigpin,HIGH);
delayMicroseconds(1000);
digitalWrite(trigpin,LOW);
duration=pulseIn(echopin,HIGH);
distance=(duration/2)/29.1;
Serial.print(distance);
Serial.println("CM");
delay(10);
if ((distance<=15))
{
  digitalWrite(led,HIGH);

}
else if(distance>15)
{
  digitalWrite(led,LOW);
}
}

