const int motor1 = 9;
const int motor2 = 10;

int pot = 0;
int vel = 0;
String estado;

void setup() {
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  if( Serial.available()>0)
  {
    estado = Serial.readString();
    pot = estado.toInt();
    Serial.println(pot);
    vel = (pot * 250)/100;
  }  
  analogWrite(motor1,0);
  analogWrite(motor2,vel);
}
