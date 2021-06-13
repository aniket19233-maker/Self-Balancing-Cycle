String str;// raw string received from android to arduino
int blueToothVal;// stores the last value sent over via bluetooth

int ena=5;
int enb=6;

int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;

void setup()
{
 
  Serial.begin(9600);// Serial 1 is for Bluetooth communication - DO NOT MODIFY

  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);

  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  analogWrite(ena, 100);
  analogWrite(enb, 100);
  delay(1000);
}

void loop()
{
  bluetooth(); // Run the Bluetooth procedure to see if there is any data being sent via BT
}

void bluetooth()
{
  while (Serial.available()>0)                             // Read bluetooth commands over Serial1 // Warning: If an error with Serial1 occurs, make sure Arduino Mega 2560 is Selected
  {
    {
      str = Serial.readStringUntil('\n');               // str is the temporary variable for storing the last sring sent over bluetooth from Android devic
    }

    blueToothVal = (str.toInt());                        //  convert the string 'str' into an integer and assign it to blueToothVal

    switch (blueToothVal)
    {
      case 1:
        Serial.println("Forward");
        Forward();
        break;

      case 2:
        Serial.println("Reverse");
        Reverse();
        break;

      case 3:
        Serial.println("Left");
        LeftTurn();
        Stop();
        break;

      case 4:
        Serial.println("Right");
        RightTurn();
        Stop();
        break;

      case 5:
        Serial.println("Stop");
        Stop();
        break;

    }                                                              // end of switch case

  }                                                              // end of while loop Serial1 read

  // if no data from Bluetooth
  if (Serial.available() < 0)
  {
    Serial.println("No Bluetooth Data ");
  }

}

void Forward()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(150);
}

void Reverse()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(150);
}

void LeftTurn()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  delay(150);
}

void RightTurn()
{
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  delay(100);
}

void Stop()
{
  digitalWrite(in1, LOW);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  delay(100);
  
}
