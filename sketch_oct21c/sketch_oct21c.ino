void setup() {
  int pinLeds1=9;
  int pinLeds2=7;
  int pinLeds3=8;
  int pinLeds4=6;
  int buttonState;
  long ran;
  int time=2000;
  pinMode(pinLeds1,OUTPUT);
  pinMode(pinLeds2,OUTPUT);
  pinMode(pinLeds3,OUTPUT);
  pinMode(pinLeds4,OUTPUT);
  pinMode(buttonPin,INPUT);
  randomSeed(analogRead(0));
  // put your setup code here, to run once:

}

void loop() {
  buttonState=
  digitalRead(buttonPin);
  if(buttonState==HIGH)
  {
    ran=random(1,7);
    if(ran==1)
    {
      digitalWrite(pinLeds4,HIGH);
      delay(time);
    }
    if(ran==2)
    
  }
  // put your main code here, to run repeatedly:

}
