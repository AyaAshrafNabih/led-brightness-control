// C++ code
//
int red = 3 ;
int button1 = 4 ; 
int button2 = 5 ; 
int i=0;

void setup()
{
  pinMode( red , OUTPUT);
  pinMode( button1 ,INPUT);
  pinMode( button2, INPUT);
 
}

void loop()
{
  if(digitalRead(button1)) 
  {
    while(i<=255)
  {
    analogWrite(red , i);
    i++;
    delay(20);
  }
  }
     if(digitalRead(button2)) 
     {
  while(i>=0)
  {
    analogWrite(red , i);
    i--;
    delay(20);
  }
     }  
}