/*
 * AMAN TECHNICAL
Relay IN1 connected to Pin 10 Arduino
Relay IN2 connected to Pin 11 Arduino
Relay IN3 connected to Pin 12 Arduino
Relay IN4 connected to Pin 13 Arduino
*/
int relay1=10;
int relay2=11;
int relay3=12;
int relay4=13;
char val;
void setup() {
pinMode(relay1,OUTPUT);
pinMode(relay2,OUTPUT);
pinMode(relay3,OUTPUT);
pinMode(relay4,OUTPUT);
digitalWrite(relay1,HIGH);
digitalWrite(relay2,HIGH);
digitalWrite(relay3,HIGH);
digitalWrite(relay4,HIGH);
Serial.begin(9600);
}
void loop() {

while (Serial.available() > 0){
val = Serial.read();
Serial.println(val);
}
//Relay is on
if( val == '1' ) {
digitalWrite(relay1,HIGH); }
else if( val == '2' ) {
digitalWrite(relay2,HIGH); }
else if( val == '3' ) {
digitalWrite(relay3,HIGH); }
else if( val == '4' ) {
digitalWrite(relay4,HIGH); }
//relay all on
else if( val == '9' ) {
digitalWrite(relay1,HIGH);
digitalWrite(relay2,HIGH);
digitalWrite(relay3,HIGH);
digitalWrite(relay4,HIGH);
}
//relay is off
else if( val == 'A' ) {
digitalWrite(relay1,LOW); }
else if( val == 'B' ) {
digitalWrite(relay2,LOW); }
else if( val == 'C' ) {
digitalWrite(relay3,LOW); }
else if( val == 'D' ) {
digitalWrite(relay4,LOW); }
//relay all off
else if( val == 'I' ) {
digitalWrite(relay1,LOW);
digitalWrite(relay2,LOW);
digitalWrite(relay3,LOW);
digitalWrite(relay4,LOW);
}

}
