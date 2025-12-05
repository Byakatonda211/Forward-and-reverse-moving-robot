// Copyright 2020

// the setup function runs once when you press reset or power the board
int leftf1=7;
int leftf2=6;
int rightf1=5;
int rightf2=4;
void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
 
    pinMode(leftf1, OUTPUT);
    pinMode(leftf2, OUTPUT);
    pinMode(rightf1, OUTPUT);
    pinMode(rightf2, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() 

  {
 forward(); 
 delay(1000);
 reverse();
 delay(1000);   
   }

void forward()
{
   
  digitalWrite(leftf1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(leftf2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rightf1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rightf2, LOW);   // turn the LED on (HIGH is the voltage level)    // wait for a second
      
  }
  void reverse()
  {
   
  digitalWrite(leftf1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(leftf2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rightf1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(rightf2, HIGH);   // turn the LED on (HIGH is the voltage level)

    }

