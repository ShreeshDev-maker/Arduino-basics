//This will be a simple code to print hello world in the serial monitor
//The serial monitor is essentially a user interface for inputs and outputs for communicating with arduino

//This will be the main code
// btw these are called comments, they help in reading the code and tell information about that piece of code, 

void setup(){   //The code in setup runs only once, when the arduino "wakes up"
  
Serial.begin(9600); /*  This is is a function in the serial library to intialize serial communication with the computer
                      9600 represents the baud rate , essentially the speed of data transfer from arduino to the computer */
  
Serial.print("Hello world!");// This prints a message that says "Hello world!" in the serial monitor
}

void loop(){ //The code in void loop executes an infinite number of times until the arduino powers off
             //since we only printed hello world once, we don't need anything in loop

}

// Congratulations !!!!  you just stepped into the amazing world of electronics 
//This will be the most memorable milestone in your journey!
//I recommend writing the code by hand, not just copy pasting it, you'll understand better
// Don't forget to add (  ;   ) after each line that requires it!
