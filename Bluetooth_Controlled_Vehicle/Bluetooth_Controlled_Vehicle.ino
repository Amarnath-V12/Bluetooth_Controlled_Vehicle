int m1=12;
int m2=11;
int M1=10;
int M2=9;
char b;

void setup(){
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(M1,OUTPUT);
  pinMode(M2,OUTPUT);
  Serial.begin(9600);
}
void loop(){
  if (Serial.available()){
    b=Serial.read();
    if (b=='f'){
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(M1,HIGH);
      digitalWrite(M2,LOW);
    }
    if (b=='b'){
      digitalWrite(m1,LOW);
      digitalWrite(m2,HIGH);
      digitalWrite(M1,LOW);
      digitalWrite(M2,HIGH);
    }
    if (b=='l'){
      digitalWrite(m1,HIGH);
      digitalWrite(m2,LOW);
      digitalWrite(M1,LOW);
      digitalWrite(M2,LOW);
    }
    if (b=='r'){
      digitalWrite(M1,HIGH);
      digitalWrite(M2,LOW);
      digitalWrite(m1,LOW);
      digitalWrite(m2,LOW);
    }
    if (b=='s'){
      digitalWrite(m1,LOW);
      digitalWrite(m2,LOW);
      digitalWrite(M1,LOW);
      digitalWrite(M2,LOW);
    }
    
  }
}
