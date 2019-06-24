int ldr;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(D4,OUTPUT);  

}

void loop() {
  // put your main code here, to run repeatedly:
ldr = analogRead(A0);
Serial.println("LDR VALUE");
Serial.print(ldr);
if(ldr<=512)
digitalWrite(D4,LOW);
else
digitalWrite(D4,HIGH);
delay(1000);
}
