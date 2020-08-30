#define RMotor1 3
#define LMotor1 4
#define RMotor2 5
#define LMotor2 6



void setup() {
  pinMode(RMotor1,OUTPUT);
  pinMode(LMotor1,OUTPUT);
  pinMode(RMotor2,OUTPUT);
  pinMode(LMotor2,OUTPUT);
}


void andafrente() {
  digitalWrite(RMotor1,1);
  digitalWrite(LMotor1,0);
  digitalWrite(RMotor2,1);
  digitalWrite(LMotor2,0);
}
void andapratras (){
  digitalWrite(RMotor1,LOW);
  digitalWrite(LMotor1,HIGH);
  digitalWrite(RMotor2,LOW);
  digitalWrite(LMotor2,HIGH);
}

void loop() {
  if (int tempo = 250;tempo > 0; tempo-- ){
    andapratras ();
    delay(tempo);
    andafrente();
    delay(tempo);
   
    }
 


}
