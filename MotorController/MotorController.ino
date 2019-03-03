
int pwm = 10; //PWM signal connected to pin 10
int fan = 5;  //The fan will be connected to pin 5
void setup() {

 Serial.begin(9600);   //Communication
 pinMode(fan, OUTPUT);
 pinMode(pwm, OUTPUT);

}

void loop() {

    digitalWrite(fan,HIGH); //This will turn on the fan of the controller  
    
    int potValue = analogRead(A0); //This will read in the value of the potentiometer 
    
    int pwmOutput = map(potValue, 0, 1023, 0, 225);//This will map the values for the PWM output 
    
    Serial.print("value: ");
    
    Serial.println(pwmOutput);
    
    analogWrite(pwm, pwmOutput); //This sends the pwm signal throuhg pin 10 
}
