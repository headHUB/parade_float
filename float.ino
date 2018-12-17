#define joyR A0
#define joyL A1
#define rFWD D2
#define rBWD D3
#define lFWD D4
#define lBWD D5


#int myArray[4] = {rFWD, rBWD, lFWD, lBWD];


void setup() {
  for (int i = 0; i < 4; i++)
  (
    pinMode(myArray[i], OUTPUT);
    digitalWrite(myArray[i], HIGH);
    )
}

void loop() {
  int lVal = analogRead(joyL);
  int rVal = analogRead(joyR);
  if (lVal <= 400)
  {
    digitalWrite(lBWD, LOW);
    digitalWrite(lFWD, HIGH);
    }  
  else if (lVal >= 600)
  {
    digitalWrite(lBWD, HIGH);
    digitalWrite(lFWD, LOW);
    }  
    else 
  {
    digitalWrite(lBWD, HIGH);
    digitalWrite(lFWD, HIGH);
    }  
    if (rVal <= 400)
  {
    digitalWrite(rBWD, LOW);
    digitalWrite(rFWD, HIGH);
    }  
  else if (rVal >= 600)
  {
    digitalWrite(rBWD, HIGH);
    digitalWrite(rFWD, LOW);
    }  
    else 
  {
    digitalWrite(rBWD, HIGH);
    digitalWrite(rFWD, HIGH);
    }
}
