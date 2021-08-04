
byte initPort[] = {0x02,0x30,0x30, 0x03};
void setup() {
  // put your setup code here, to run once:
// initialize serial:
  Serial.begin(57600);
    // print the string when a newline arrives:
  Serial.write(initPort, sizeof(initPort));
  delay(1000);
  initPort=Serial.read();
  
}

void loop() {
  // put your main code here, to run repeatedly:

}
