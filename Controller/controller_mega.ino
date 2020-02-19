#include<Servo.h>
int t1=2;
int t2=3;
int t3=4;
int t4=5;
int t5=6;
int t6=7;
int val1,val2,val3,val4,val5,val6;
Servo esc1,esc2,esc3,esc4,esc5,esc6;

int datafromUser=0;
int  incoming;
int i=0;
int arr[17]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int pin1=22;
int pin2=24;
int pin3=50;
int pin4=52;
int pin5=36;
int pin6=38;
int pin7=40;
int pin8=42;
int pin9=44;
int pin10=46;
void setup() {
  // put your setup code here, to run once:
  pinMode( pin1 , OUTPUT );
  pinMode( pin2 , OUTPUT );
  pinMode( pin3 , OUTPUT );
  pinMode( pin4 , OUTPUT );
  pinMode( pin5 , OUTPUT );
  pinMode( pin6 , OUTPUT );
  pinMode( pin7 , OUTPUT );
  pinMode( pin8 , OUTPUT );
  pinMode( pin9 , OUTPUT );
  pinMode( pin10 , OUTPUT );
  esc1.attach(t1);
  esc2.attach(t2);
  esc3.attach(t3);
  esc4.attach(t4);
  esc5.attach(t5);
  esc6.attach(t6);
 
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:

  
  if(Serial.available() > 0)
  {
   
     incoming = Serial.read();
      if(incoming!=13)
      {
        arr[i]=incoming;
       i++;
      }
  
else
{i=0;
  val1=map(arr[3],97,117,1100,1900);
  val2=map(arr[3],97,117,1100,1900);
  val3=map(arr[0],97,117,1100,1900);
  val4=map(arr[0],97,117,1100,1900);
  val5=map(arr[1],97,117,1100,1900);
  val6=map(arr[1],97,117,1100,1900);
  esc1.writeMicroseconds(val1);  
  esc2.writeMicroseconds(val2); 
  esc3.writeMicroseconds(val3);
  esc4.writeMicroseconds(val4);
  esc5.writeMicroseconds(val5);
  esc6.writeMicroseconds(val6);



   if(arr[8]==108 && arr[2]==108)
        {
          //digitalWrite(13,HIGH);
          digitalWrite(pin1,HIGH);
          digitalWrite(pin2,LOW);
        }
       if(arr[8]==108 && arr[2]==106)
        {
          //digitalWrite(13,HIGH);
          digitalWrite(pin1,LOW);
          digitalWrite(pin2,HIGH);
        }
         if(arr[7]==108 && arr[2]==108)
        {
          digitalWrite(pin3,HIGH);
          digitalWrite(pin4,LOW);
        }

        if(arr[7]==108 && arr[2]==106)
        {
          digitalWrite(pin3,LOW);
          digitalWrite(pin4,HIGH);
        }
        if(arr[6]==108 && arr[2]==108)
        {
          digitalWrite(pin5,HIGH);
          digitalWrite(pin6,LOW);
        }

        if(arr[6]==108 && arr[2]==106)
        {
          digitalWrite(pin5,LOW);
          digitalWrite(pin6,HIGH);
        }

        if(arr[5]==108 && arr[2]==108)
        {
          digitalWrite(pin7,HIGH);
          digitalWrite(pin8,LOW);
        }

        if(arr[5]==108 && arr[2]==106)
        {
          digitalWrite(pin7,LOW);
          digitalWrite(pin8,HIGH);
        }

         if(arr[9]==108 && arr[2]==108)
        {
          digitalWrite(pin9,HIGH);
          digitalWrite(pin10,LOW);
        }

        if(arr[9]==108 && arr[2]==106)
        {
          digitalWrite(pin9,LOW);
          digitalWrite(pin10,HIGH);
        }

         if(arr[2]==107)
        {
          digitalWrite(pin1,HIGH);
          digitalWrite(pin2,HIGH);
          digitalWrite(pin3,HIGH);
          digitalWrite(pin4,HIGH);
          digitalWrite(pin5,HIGH);
          digitalWrite(pin6,HIGH);
          digitalWrite(pin7,HIGH);
          digitalWrite(pin8,HIGH);
          digitalWrite(pin9,HIGH);
          digitalWrite(pin10,HIGH);
          
        }
    }
  }
}
