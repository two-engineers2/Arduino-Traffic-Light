int red1 = 13;
int yellow1 = 12;
int green1 = 11;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(red1, OUTPUT); //red 1
  pinMode(yellow1, OUTPUT); //yellow 1
  pinMode(green1, OUTPUT); //green 1
}

// the loop function runs over and over again forever
void loop() {
  //turn red on and turn yellow off
  digitalWrite(red1, HIGH);                       
  digitalWrite(yellow1, LOW);   
  delay(1000);   
  //turn red off and turn green on
  digitalWrite(red1, LOW);   
  digitalWrite(green1, HIGH);   
  delay(1000); 
  //turn green off and turn yellow on
  digitalWrite(green1, LOW);   
  digitalWrite(yellow1, HIGH);   
  delay(1000); 
}
