int directionA = 3;
int directionB = 2;
int speed = A0;

void setup() {
  Serial.begin(9600);
  pinMode(directionA, OUTPUT);
  pinMode(directionB, OUTPUT);
  pinMode(speed, OUTPUT);
}

void loop() {
   analogWrite(speed, 127);
   digitalWrite(directionA, HIGH);
   digitalWrite(directionB, LOW);
   delay(3000);
   digitalWrite(directionA, LOW);
   digitalWrite(directionB, HIGH);
   delay(3000);
   analogWrite(speed, 127);
   
   

}
