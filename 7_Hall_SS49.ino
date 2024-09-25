int pin = A0;         //Pin εισόδου αισθητήρα Hall
int vcc = 5000;       //Τάση τροφοδοσίας αισθητήρα Hall σε mV
int Ledpin=3;         //Pin Led

int value;            //Μεταβλητή τιμής στο εύρος 0-1023
int voltage;          //Μεταβλητή τάσης στο εύρος 0-Vcc
int field;            //Μεταβλητή τιμής πεδίου σε mT
int led_intensity;    //Μεταβλητή έντασης φωτεινότητας LED

void setup() {
  pinMode(Ledpin, OUTPUT);
  Serial.begin(9600); //Έναρξη σειριακής επικοινωνίας
}

void loop() {
  value = analogRead(pin); //Ανάγνωση τιμής του αισθητήρα Hall
  voltage = value * (vcc / 1024.0); //Μετατροπή σε τιμή τάσης (mV)
  field = map(voltage, 1000, 4000, -100, 100); //Υπολογισμός μαγνητικού πεδίου (mT)
  led_intensity= map(abs(field),0,100,0,255);
  
  if(abs(field)>5){
     analogWrite(Ledpin, led_intensity);
  }
  if(voltage != 2500){  // Όταν Vout=2,5V ==> απουσία μαγνητικού πεδίου
  //Εμφάνιση αποτελεσμάτων
   Serial.print("Value: ");
   Serial.print(value);
   Serial.print("\t");
   Serial.print(voltage);
   Serial.println(" mV");
   Serial.print("Magnetic Field: ");
   Serial.print(field);
   Serial.println(" mT");
   Serial.println("==========================");
   delay(100); //Λήψη νέας τιμής κάθε 100msec
  }
  else{
   Serial.print(" No magnetic Field: ");
   Serial.print(field);
   Serial.println(" mT");
   Serial.println("==========================");
  }
}
