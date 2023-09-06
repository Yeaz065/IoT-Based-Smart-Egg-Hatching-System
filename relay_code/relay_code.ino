#define FAN 15
#define BULB 2
#define Mist 19
#define Light 23


void setup() {
  // put your setup code here, to run once:
  pinMode(FAN,OUTPUT);
  pinMode(Mist,OUTPUT);
  pinMode(BULB,OUTPUT);
  pinMode(Light,OUTPUT);
  digitalWrite(FAN,HIGH);
  digitalWrite(BULB,HIGH);
  digitalWrite(Mist,HIGH);
  digitalWrite(Light, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(FAN,LOW);
  delay(2000);
  digitalWrite(FAN,HIGH);
  digitalWrite(BULB,LOW);
  delay(2000);
  digitalWrite(BULB,HIGH);
  digitalWrite(Mist,LOW);
  delay(2000);
  digitalWrite(Mist,HIGH);
  digitalWrite(Light,LOW);
  delay(2000);
  digitalWrite(Light,HIGH);
  delay(2000);

}
