// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  //Ερώτημα 1 
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1500);                     
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(500);
  //Ερώτημα 2
  //S.0.S  --> .....-/-.-.--/.....-
  //           0 1 2  3 4 5  6 7 8 
  for(int i=0; i<9;i++){
     if(i==2 || i==8){
       digitalWrite(LED_BUILTIN, HIGH);  
       delay(500);                     
       digitalWrite(LED_BUILTIN, LOW);
       delay(1500);
     }
     else if(i==3 || i==4){
       digitalWrite(LED_BUILTIN, HIGH);  
       delay(1500);                     
       digitalWrite(LED_BUILTIN, LOW);
       delay(500);  
     }
     else if(i==5){
       digitalWrite(LED_BUILTIN, HIGH);  
       delay(1500);                     
       digitalWrite(LED_BUILTIN, LOW);
       delay(1500);
     }
     else{
       digitalWrite(LED_BUILTIN, HIGH);  
       delay(500);                     
       digitalWrite(LED_BUILTIN, LOW);
       delay(500);
     }

  }             
}
