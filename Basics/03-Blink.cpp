void setup() { 
  pinMode(LED_BUILTIN, OUTPUT);// initialize digital pin LED_BUILTIN as an output.
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
}
//Congrats on your second ever program!
// btw you do not need anything extra for this , on most arduinos there is an inbult LED which will blink in this code
//you learnt pinMode and digitalwrite functions 
//More info can be found at off arduino docs but you dont't need that for now
// As always write the code yourself, no ctrl+c and ctrl+v (different for mac) and don't forget to put "  ;  " at the end of each line!
