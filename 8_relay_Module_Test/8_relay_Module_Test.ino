//documents can be found at UIC RED robotic Team -> Motor controller info -> relay module
//
//assgined each relay to Arduino pins accoringly
//In order to test, the 8 relay module, you need to uncommom 
//the loop, and change each pin number, if you see the led is blinking 
//and sound, which means that relay works good 

int relay1 = 2;
int relay2 = 3;
int relay3 = 4;
int relay4 = 5;
int relay5 = 6;
int relay6 = 7;
int relay7 = 8;
int relay8 = 9;


void setup() {
  //assgin the Pinmode for each relays
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
  pinMode(relay7, OUTPUT);
  pinMode(relay8, OUTPUT);

}

void loop() {
  //Please uncomm the code and change each relay pin according 
  //digitalWrite(relay7,HIGH);
  //delay(100);
  //digitalWrite(relay7,LOW);
  //delay(100);
  // put your main code here, to run repeatedly:

}
