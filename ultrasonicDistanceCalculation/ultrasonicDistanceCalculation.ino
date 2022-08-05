int trig = 9;
int echo = 8;
int time = 0;
int distance = 0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);
time=pulseIn(echo,HIGH);
distance=(time*0.034)/2;
  Serial.println("Distance In cm = ");
  Serial.println(distance);
delay(2000);
}
