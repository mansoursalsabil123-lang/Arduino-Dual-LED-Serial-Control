const int led=13;
const int led1=12;
void setup() {
  pinMode(led,OUTPUT);
  pinMode(led1,OUTPUT);
  Serial.begin(9600);
  Serial.println("envoyer 1 ou 0");
}

void loop() {
  if(Serial.available()>0){
    String x=Serial.readString();
    if (x[0]=='1'){
      if(x[1]=='1')digitalWrite(led,HIGH);
      if(x[1]=='0')digitalWrite(led,LOW);
      delay(1000);
    }
    if (x[0]=='2'){
      if(x[1]=='1')digitalWrite(led1,HIGH);
      if(x[1]=='0')digitalWrite(led1,LOW);
      delay(1000);
    }
    if (x[0] == '0') {
      if (digitalRead(led) == HIGH)
        digitalWrite(led, LOW);
      else 
        digitalWrite(led, HIGH);

      if (digitalRead(led1) == HIGH)
        digitalWrite(led1, LOW);
      else
        digitalWrite(led1, HIGH);
    }
  }
  
}

