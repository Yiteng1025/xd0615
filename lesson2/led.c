int i = 0;
int j = 0;
void setup()
{
  for(i=0; i<8; i++) {
  	pinMode(i, OUTPUT);
  }
  digitalWrite(0, HIGH);
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  digitalWrite(7, LOW);
  delay(500);
  
 }


void loop()
{
   
  
  for(i=1,j=6; i<4,j>=4; i++,j--) {
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    delay(500);     
    
  }
  
  for(i=2,j=5; i>=0,j<=7; i--,j++) {
    digitalWrite(i, HIGH);
    digitalWrite(j, HIGH);
    delay(500);
    digitalWrite(i, LOW);
    digitalWrite(j, LOW);
    delay(500);     
  }
  
 
  
 }