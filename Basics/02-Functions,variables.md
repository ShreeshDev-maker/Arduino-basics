This will be an explanation to some basic prerequisites for upcoming programs

VARIABLES ----------


A variable is a container that stores data.

Think of it like a labeled box where you keep information.

Example:
int ledPin = 13;
int delayTime = 1000;
Explanation:

int → data type (integer number)

ledPin → variable name

13 → value stored inside

FUNCTIONS----------

A function is a block of code that performs a task.

Arduino programs always have two main functions:

void setup() {
  // runs once
}      

void loop() {
  // runs again and again
}       
      
🔹 setup()

Runs once when the board starts.

Used to:

Set pin modes

Start Serial communication

Initialize sensors

Example:

void setup() {
  pinMode(13, OUTPUT);
}     
       
🔹 loop()

Runs repeatedly forever.

Used to:

Check inputs

Control outputs

Run logic

Example:

void loop() {
  digitalWrite(13, HIGH);
  delay(1000);
  digitalWrite(13, LOW);
  delay(1000);
}

This makes the LED blink.
