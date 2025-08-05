void setup() {
  pinMode(8, OUTPUT);   

}
// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH); // turns the LED on (HIGH is the voltage level)
  delay(100); // waits a second
  digitalWrite(8, LOW); // turns the LED off (LOW voltage level)
  delay(100); // waits a second
}
