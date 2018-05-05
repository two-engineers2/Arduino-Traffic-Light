int red1 = 13;
int yellow1 = 12;
int green1 = 11;
int red2 = 10;
int yellow2 = 9;
int green2 = 8;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red1, OUTPUT); //red 1
  pinMode(yellow1, OUTPUT); //yellow 1
  pinMode(green1, OUTPUT); //green 1
  pinMode(red2, OUTPUT); //red 2
  pinMode(yellow2, OUTPUT); //yellow 2
  pinMode(green2, OUTPUT); //green 2
}

// the loop function runs over and over again forever
void loop() {
  //turn on red 1
  digitalWrite(red1, HIGH);  
  delay(500); 
  //turn off red 2 and turn on green 2
  digitalWrite(red2, LOW);
  digitalWrite(green2, HIGH);   
  delay(2000); 
  //turn off green 2 and turn on yellow 2
  digitalWrite(green2, LOW);   
  digitalWrite(yellow2, HIGH);   
  delay(1000); 
  //turn off yellow 2 and turn on red 2
  digitalWrite(yellow2, LOW);   
  digitalWrite(red2, HIGH);   
  delay(1000); 
  //turn off red 1 and turn on green 1
  digitalWrite(red1, LOW);
  digitalWrite(green1, HIGH);      
  delay(2000); 
  //turn off green 1 and turn on yellow 1
  digitalWrite(green1, LOW);   
  digitalWrite(yellow1, HIGH);   
  delay(1000); 
  //turn off yellow 1 and turn on red 1
  digitalWrite(yellow1, LOW);   
  digitalWrite(red1, HIGH);   
  delay(500);
}
