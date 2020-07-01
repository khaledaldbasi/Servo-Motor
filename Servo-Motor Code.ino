#include <Servo.h>
Servo servo1;
Servo servo2;
int Pos = 0;

  void setup()
{
  servo1.attach(4);
  servo2.attach(5);
}
  void loop()
{
 for(Pos=0;Pos<=180;Pos++)  
	{
      servo1.write(Pos);
      servo2.write(Pos);
      delay(25);
	}
 for(Pos=180;Pos>=0;Pos--)  
     {
       servo1.write(Pos);
       servo2.write(Pos);
       delay(25);
     }
}