int red = 0;
int blue =1;
int green =2; 

void setup() {
  // put your setup code here, to run once:
  pinMode (red, OUTPUT);
  pinMode (blue, OUTPUT);
  pinMode (green, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
/*
  for( int i = 500 ; i > 20; i-=20){

  digitalWrite(red, LOW);   
  digitalWrite(blue, LOW);
  digitalWrite(green, HIGH);
  delay(i);
  
   digitalWrite(red, HIGH);   
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
  delay(i);

   digitalWrite(red, LOW);   
  digitalWrite(blue, HIGH);
  digitalWrite(green, LOW);
  delay(i);
  }
 
  digitalWrite(red, HIGH);   
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);
delay(1000);*/

 //red
 delay(1000);
  digitalWrite(red, HIGH);   
  digitalWrite(blue, LOW);
  digitalWrite(green, LOW);
 
 //green
 delay(1000);
  digitalWrite(green, HIGH);   
  digitalWrite(red, LOW);

 //blue
 delay(1000);
  digitalWrite(blue, HIGH);   
  digitalWrite(green, LOW);
/*
 //red_green
 delay(1000);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  digitalWrite(red, HIGH);

 //green_blue
 delay(1000);
  digitalWrite(red, LOW);
  digitalWrite(blue, HIGH);
  digitalWrite(red, HIGH);
 
 //red_blue_green
 delay(1000);
  digitalWrite(red, HIGH);   
  digitalWrite(blue, HIGH);
  digitalWrite(green, HIGH);

 delay(1000);
  digitalWrite(red, HIGH);   
  digitalWrite(blue, HIGH);
*/
}
