int ledPin1 = 9;   //Pin 1ου LED
int ledPin2 = 10;  //Pin 2ου LED
int ledPin3 = 11;  //Pin 3ου LED
int ledPin4 = 6;   //Pin 4ου LED
int ledPin5 = 5;   //Pin 5ου LED
int ledPin6 = 3;   //Pin 6ου LED
int pins[6] ={9,10,11,6,5,3};

void setup() {
  for(int i=0; i<6;i++){
    pinMode(pins[i], OUTPUT);    //Ορισμός ως Pin εξόδου
  }
  randomSeed(analogRead(A0));  //Λήψη τυχαίων αριθμών βάσει της εισόδου Α0
}
void loop() {
  for(int i=0; i<6;i++){
  analogWrite(pins[i], random(0, 130) + 125);  //Τυχαίο duty cycle μεταξύ των τιμών 125 & 255
  }
  delay(random(0, 120));  //Τυχαία καθυστέρηση μεταξύ 0 & 120 ms
}

