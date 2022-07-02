int pump=7;
int trig_Pin=8;
int echo_Pin=9;
long Time;
int distance;

void setup() {

Serial.begin(9600);
pinMode(trig_Pin,OUTPUT);
pinMode(echo_Pin,INPUT);
pinMode(pump,OUTPUT);
}

void loop() {
digitalWrite(trig_Pin,LOW);
delayMicroseconds(2);
digitalWrite(trig_Pin,HIGH);
delayMicroseconds(10);
digitalWrite(trig_Pin,LOW);
Time=pulseIn(echo_Pin,HIGH);
distance=Time*0.04/2;
Serial.print("Distance:");
Serial.println(distance);
if(distance<10)
{
  digitalWrite(pump,HIGH);
}
else
{
  digitalWrite(pump,LOW);
}
}
