#define LM35 A0
void setup(){
  Serial.begin(9600);
}
void loop(){
  float lmvalue=analogRead(LM35);
  float tempr=(lmvalue*500)/1023+20;
  Serial.println(tempr);
  delay(200);
}