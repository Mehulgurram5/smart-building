void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(D7,OUTPUT);
//pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(analogRead(A0)>630)
   {
       Serial.println("Smoke  detected");
       digitalWrite(D7,HIGH);
       delay(1000);
   }
else
  {
       Serial.println("Smoke   not detected");
       digitalWrite(D7,LOW);
      delay(1000);
  }
Serial.println(analogRead(A0));
}
