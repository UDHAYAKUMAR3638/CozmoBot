double ch1=2;
int a=4; int b=5;
int en1=9;int en2=10;
double ch2=3;
int c=6; int d=7;

void setup()
{
  Serial.begin(9600);
  
  pinMode(2,INPUT);
  pinMode(4,OUTPUT); pinMode(5,OUTPUT);
  pinMode(3,INPUT);
  pinMode(6,OUTPUT); pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);pinMode(10,OUTPUT);
}

void loop()
{
ch1 = pulseIn(2,HIGH);
ch2 = pulseIn(3,HIGH);

       
if((ch1==0)&&(ch2==0))
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}

else if((ch1>1530)&&(ch2>1530))//forward
{
  analogWrite(en1,200);
 analogWrite(en2,200); 
digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,HIGH);   
 
}

else if((ch1>1530)&&(ch2<1460))//left
{  analogWrite(en1,200);
 analogWrite(en2,200); 
   digitalWrite(a,HIGH); digitalWrite(b,LOW);
 digitalWrite(c,HIGH);digitalWrite(d,LOW); 
    

}

else if((ch1<1460)&&(ch2>1530))//right
{      analogWrite(en1,200);
 analogWrite(en2,200); 
  digitalWrite(a,LOW); digitalWrite(b,HIGH);
 digitalWrite(c,LOW);digitalWrite(d,HIGH);
}

else if((ch1<1460)&&(ch2<1460))//reverse
{ 
   analogWrite(en1,255);
 analogWrite(en2,255); digitalWrite(a,LOW); digitalWrite(b,HIGH);
 digitalWrite(c,HIGH);digitalWrite(d,LOW);
  

}

else
{     
 digitalWrite(a,LOW); digitalWrite(b,LOW);
 digitalWrite(c,LOW);digitalWrite(d,LOW);
}

}