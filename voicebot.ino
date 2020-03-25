//Wheel used has circumference = 20cm, Encoder wheel has 20 holes
// 1 hole = 1cm
int count = 0;
int sp = 9; 
int l1 = 4;
int l2 = 5;
int r1 = 6;
int r2 = 7;
void counter()
{
count++;
}
void forward()
{
digitalWrite(l1,HIGH);
digitalWrite(l2,LOW);
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
}
void backward() 
{
digitalWrite(l1,LOW);
digitalWrite(l2,HIGH);
digitalWrite(r1,LOW);
digitalWrite(r2,HIGH);
}
void left() 
{
digitalWrite(l1,LOW);
digitalWrite(l2,LOW);
digitalWrite(r1,HIGH);
digitalWrite(r2,LOW);
}
void right() 
{
digitalWrite(l1,HIGH);
digitalWrite(l2,LOW);
digitalWrite(r1,LOW);
digitalWrite(r2,LOW);
}

void setup()
{
Serial.begin(9600);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
attachInterrupt(digitalPinToInterrupt(sp), counter, RISING);
}

void loop() 
{
String a;
if (Serial.available())
{
a=Serial.readString();
delay(2000);
int b = a.indexOf(" ");
String s = a.substring(0,(b));
String s2 = a.substring(b+1);
int s1 = a.toInt();
Serial.println(s1);
Serial.println(s2);
while (count <= s1) 
{
if (s2=="forward")
{
forward();
}
else if (s2=="right")
{
right();
delay(2000);
forward();
}
else if (s2=="left")
{
left();
delay(2000);
forward();
}
else if (s2=="backward")
{
backward();
}
}
}
}
