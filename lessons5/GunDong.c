#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7


void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片选1
  pinMode(S2, OUTPUT);//片选2
  pinMode(S3, OUTPUT);//片选3
  pinMode(S4, OUTPUT);//片选4
  
  pinMode(LT,OUTPUT);//指示灯
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);

  Serial.begin(9600);
}

byte income=0;
char a[4];
int i;

void loop()
{
  if(Serial.available()>0)
  {
    for(i=0; i<4; i++) {
    a[i] = Serial.read()-'0';
    }
    
    digitalWrite(11,LOW);
    digitalWrite(IN1,a[1]&0x1);
   	digitalWrite(IN2,(a[1]>>1)&0x1);
    digitalWrite(IN3,(a[1]>>2)&0x1);
    digitalWrite(IN4,(a[1]>>3)&0x1);
  	delay(100);
    
    digitalWrite(10,LOW);
    digitalWrite(IN1,a[1]&0x1);
   	digitalWrite(IN2,(a[1]>>1)&0x1);
    digitalWrite(IN3,(a[1]>>2)&0x1);
    digitalWrite(IN4,(a[1]>>3)&0x1);
    digitalWrite(11,LOW);
    digitalWrite(IN1,a[2]&0x1);
   	digitalWrite(IN2,(a[2]>>1)&0x1);
    digitalWrite(IN3,(a[2]>>2)&0x1);
    digitalWrite(IN4,(a[2]>>3)&0x1);
    delay(100);
      
    digitalWrite(9,LOW);
    digitalWrite(IN1,a[1]&0x1);
   	digitalWrite(IN2,(a[1]>>1)&0x1);
    digitalWrite(IN3,(a[1]>>2)&0x1);
    digitalWrite(IN4,(a[1]>>3)&0x1);
    digitalWrite(10,LOW);
    digitalWrite(IN1,a[2]&0x1);
   	digitalWrite(IN2,(a[2]>>1)&0x1);
    digitalWrite(IN3,(a[2]>>2)&0x1);
    digitalWrite(IN4,(a[3]>>3)&0x1);
    digitalWrite(11,LOW);
    digitalWrite(IN1,a[3]&0x1);
   	digitalWrite(IN2,(a[3]>>1)&0x1);
    digitalWrite(IN3,(a[3]>>2)&0x1);
    digitalWrite(IN4,(a[3]>>3)&0x1);
    delay(100);
    
    digitalWrite(8,LOW);
    digitalWrite(IN1,a[1]&0x1);
   	digitalWrite(IN2,(a[1]>>1)&0x1);
    digitalWrite(IN3,(a[1]>>2)&0x1);
    digitalWrite(IN4,(a[1]>>3)&0x1);
    digitalWrite(9,LOW);
    digitalWrite(IN1,a[2]&0x1);
   	digitalWrite(IN2,(a[2]>>1)&0x1);
    digitalWrite(IN3,(a[2]>>2)&0x1);
    digitalWrite(IN4,(a[2]>>3)&0x1);
    digitalWrite(10,LOW);
    digitalWrite(IN1,a[3]&0x1);
   	digitalWrite(IN2,(a[3]>>1)&0x1);
    digitalWrite(IN3,(a[3]>>2)&0x1);
    digitalWrite(IN4,(a[3]>>3)&0x1);
    digitalWrite(11,LOW);
    digitalWrite(IN1,a[4]&0x1);
   	digitalWrite(IN2,(a[4]>>1)&0x1);
    digitalWrite(IN3,(a[4]>>2)&0x1);
    digitalWrite(IN4,(a[4]>>3)&0x1);
    delay(100);
    
    digitalWrite(8,LOW);
    digitalWrite(IN1,a[2]&0x1);
   	digitalWrite(IN2,(a[2]>>1)&0x1);
    digitalWrite(IN3,(a[2]>>2)&0x1);
    digitalWrite(IN4,(a[2]>>3)&0x1);
    digitalWrite(9,LOW);
    digitalWrite(IN1,a[3]&0x1);
   	digitalWrite(IN2,(a[3]>>1)&0x1);
    digitalWrite(IN3,(a[3]>>2)&0x1);
    digitalWrite(IN4,(a[3]>>3)&0x1);
    digitalWrite(10,LOW);
    digitalWrite(IN1,a[4]&0x1);
   	digitalWrite(IN2,(a[4]>>1)&0x1);
    digitalWrite(IN3,(a[4]>>2)&0x1);
    digitalWrite(IN4,(a[4]>>3)&0x1);
    delay(100);
    
    digitalWrite(8,LOW);
    digitalWrite(IN1,a[3]&0x1);
   	digitalWrite(IN2,(a[3]>>1)&0x1);
    digitalWrite(IN3,(a[3]>>2)&0x1);
    digitalWrite(IN4,(a[3]>>3)&0x1);
    digitalWrite(9,LOW);
    digitalWrite(IN1,a[4]&0x1);
   	digitalWrite(IN2,(a[4]>>1)&0x1);
    digitalWrite(IN3,(a[4]>>2)&0x1);
    digitalWrite(IN4,(a[4]>>3)&0x1);
    delay(100);
    
    digitalWrite(8,LOW);
    digitalWrite(IN1,a[4]&0x1);
   	digitalWrite(IN2,(a[4]>>1)&0x1);
    digitalWrite(IN3,(a[4]>>2)&0x1);
    digitalWrite(IN4,(a[4]>>3)&0x1);
    
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
}


}
