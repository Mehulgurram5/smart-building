
void setup() {
  // put your setup code here, to run once:
pinMode(D0,INPUT);
pinMode(D7,OUTPUT);
//pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(digitalRead(D4))
   {
       Serial.println("Flame detected");
       digitalWrite(D7,HIGH);
       delay(1000);
   }
else
  {
       Serial.println("Flame not detected");
       digitalWrite(D7,LOW);
      delay(1000);
  }
//Serial.println(analogRead(A0));
}
