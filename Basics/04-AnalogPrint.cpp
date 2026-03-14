/*This will be code to read an analog inout on pin A0 and print to the serial monitor 
Think of the analog input like an infinitely variable voltage between 0 and 5v 
There are infinite voltageas between 0 and 5v
You must know that all elctronic processors, microcontrollers, etc operate in the digital domain
Thus to interact with the analog world they need analog-to-digital converters or ADCs
The arduino has six onboard ADCs which are libelled A0 through A5 collectively labelled ANALOG IN
Connect a 10k potentiometer's ends to 5v and gnd and the middle pin to A0,  this will act as a voltage divider
The arduino will then read this voltage and print the ADC value to the serial monitor 
*/
void setup(){
  Serial.begin(9600);//Initialize serial comm. at 9600 baud
}
void loop(){
  int sensorval = analogRead(A0);//reads the analog value and assigns it the integer data type sensorval variable
  Serial.println(sensorvalue);//prints the sensor value every new line
  delay(5);//delay for stability

  /* After you upload this you should be getting values from 0 to 1023
  This is because the arduino's ADCs have a resolutions of 10 bits (2^10 = 1024 different values)
  The Serial.println functions prints the data every new line 
  You learnt the analogRead function and printing in the serial monitor
  */
