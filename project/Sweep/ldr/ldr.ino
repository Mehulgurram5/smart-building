int ldr;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  

}

void loop() {
  // put your main code here, to run repeatedly:
ldr = analogRead(A0);
Serial.print("LDR VALUE");
Serial.print(ldr);
int mv=map(ldr,0,1024,0,255);
Serial.print("mapped LDR value0");
Serial.println(mv);
if(mv>=0 and mv<=127)
digitalWrite(D2,LOW);
else if(mv>=128 and mv<=255)
digitalWrite(D2,HIGH);
delay(500);


}
