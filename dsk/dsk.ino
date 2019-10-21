int pinLed[7]={2,3,4,5,6,7,8};
};
int switchPin=9;
int blank=6;
 
void setup() {
 for(int i=0;i<7;i++)
 {
  pinMode(LedPin[i],OUTPUT);
  digitalWrite(ledPin[i],LOW);
 }
 randomSeed(analogRead(0));
}

  // put your setup code here, to run once:



void loop() {
if(digitalRead(switchPin))
{
  rollTheDice();
}
delay(100);
void rollTheDice()
{
  int result=0;
  int lengthOfRoll=random(15,25);
  for(int i=0;i<lengthOfRoll;i++)
  {
    result=random(0,6);
    show(result);
    delay(50+i*10);
  }
  for(int j=0;j<3;j++)
  {
    show(blank);
    delay(500);
  }
}
void show(int result)
{
  for(int i=0;i<7;i++)
  {
    digitalWrite(ledPins[i],dicePatterns[result][i]);
  }
}// put your main code here, to run repeatedly:

}
