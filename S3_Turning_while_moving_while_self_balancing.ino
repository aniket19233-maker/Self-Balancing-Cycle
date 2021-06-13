int ena = 5;
int enb = 6;

int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  analogWrite(ena, 500);
  analogWrite(enb, 500);
  delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(10000);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  //turning using motors
  delay(3000);

  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(5000);

}
