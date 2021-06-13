
int enb = 6;
int in3 = 10;
int in4 = 11;
#include <Servo.h>
Servo myservo;
int pos = 0;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(3);
  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
  analogWrite(enb, 200);
  delay(1000);
}

void loop() {
//  //  digitalWrite(in3, HIGH);
//  //  digitalWrite(in4, LOW);
//  //  delay(5000);
//
//  //  digitalWrite(in3, LOW);
//  //  digitalWrite(in4, LOW);
//  for (pos = 0; pos <= 180; pos += 1) {
//    myservo.write(pos);
//  }
//  delay(1000);
//
//  for (pos = 180; pos >= 0; pos -= 1) {
//    myservo.write(pos);
//     }
//  delay(1000);
//  //  digitalWrite(in3, HIGH);
//  //  digitalWrite(in4, LOW);
//  //  myservo.write(0);
//  //  delay(5000);
//  //  delay(2000);
myservo.write(157);
delay(100000);
}
