/* Circuit Diagram and controlling of  2 DC motors Using L293D Motor driver*/
void setup()
{
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
}

void loop()
{
  digitalWrite(2, HIGH);  //Enable the I/O number 1 and 2
  digitalWrite(3, HIGH);  // Controlling  the first DC Motor
  digitalWrite(4, LOW);   // Controlling  the first DC Motor
  // If Pin 3 is High and Pin 4 is Low the motor will go forward but if it is reversed the Motor will go Backward
  
  digitalWrite(10, HIGH); //Enable the I/O number 3 and 4
  digitalWrite(8, LOW);   // Controlling  the second DC Motor
  digitalWrite(9, HIGH);  // Controlling  the second DC Motor
  // Same idea here as the previous Motor but if both pins are Low the Motor won't work

  
  delay(1000); // Wait for 1000 millisecond(s)
}
