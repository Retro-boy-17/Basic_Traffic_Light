void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(12,OUTPUT);
pinMode(13,OUTPUT);
pinMode(14,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(12,HIGH);
digitalWrite(13,LOW);
digitalWrite(14,LOW);
delay(1000);

digitalWrite(12,LOW);
digitalWrite(13,HIGH);
digitalWrite(14,LOW);
delay(1000);

digitalWrite(12,LOW);
digitalWrite(13,LOW);
digitalWrite(14,HIGH);
delay(1000);
}
