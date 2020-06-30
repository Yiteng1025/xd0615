#define IN1 3
#define IN2 4
#define IN3 5
#define IN4 6

#define S1 9

#define LT 7
#define BT 8

int pinInterrupt=2;
int n;

void myfunc()
{
   for(n = 0; n<=9; n++) {
      digitalWrite(S1,LOW);
      digitalWrite(IN1,n&0x1);
      digitalWrite(IN2,(n>>1)&0x1);
      digitalWrite(IN3,(n>>2)&0x1);
      digitalWrite(IN4,(n>>3)&0x1);
      delay(1000);
      digitalWrite(S1,HIGH);
    }
}

void setup()
{
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
  pinMode(S1, OUTPUT);
  
  pinMode(LT,OUTPUT);
  pinMode(BT,OUTPUT);
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  digitalWrite(S1,HIGH);

  Serial.begin(9600);
  for(n = 0; n<=9; n++) {
      digitalWrite(S1,LOW);
      digitalWrite(IN1,n&0x1);
      digitalWrite(IN2,(n>>1)&0x1);
      digitalWrite(IN3,(n>>2)&0x1);
      digitalWrite(IN4,(n>>3)&0x1);
      delay(1000);
      digitalWrite(S1,HIGH);
    }
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), myfunc, CHANGE);
} 

void loop()
{
 
}