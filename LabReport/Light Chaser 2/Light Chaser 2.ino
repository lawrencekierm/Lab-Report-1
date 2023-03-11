/* This program has the same concept in the program Light Chaser 1. But in this program all 4 LEDs 
blink one by one, creating a light chasing effect back and forth. To make it work, I added another 
“for loop” that turns on and off all LEDs from the opposite direction: from LED 4 to LED 1 (pin 13 to pin 10).
These 4 LEDs are all connected to its designated pins (10 to 13), with resistors 
connected along each one to avoid the damage on LEDs.*/

/* To reduce multiple strings in this program, I have used the array function where
I listed all assigned pins for all LEDs. Furthermore, I also have used the "for loop"
function on both Void Setup and Void Loop to minimize the strings. */

int LEDs[] = {10, 11, 12, 13};              // This array is to define LED pins

void setup() {
                                           // This will assign pin 10 to 13 as an output of the LEDs
  for (int LEDs = 10; LEDs < 14; LEDs++) { // This for loop goes through all pins 
    pinMode(LEDs, OUTPUT);                 // and assign them as an output 
  }
}

void loop() {
                                           // This for loop turns on and off all LEDs one by one from LED 1 to LED 4 (pin 10 to 13)
  for (int LEDs = 10; LEDs < 14; LEDs++) { //This for loop goes through all pins from LED pin 10 to 13
    digitalWrite(LEDs, HIGH);              // This turns on the LED: voltage HIGH
    delay(200);				                     // This keeps the LED on for 200 millisecond (0.2 second)
    digitalWrite(LEDs, LOW);               // This turns off the LED after 0.2 second 
  }
  
  /* After the for loop above, it goes to this for loop that turns on and off the LEDs
  from backward direction; from LED 4 to LED 1(pin 13 to 11)*/

  for (int LEDs = 13 - 1; LEDs >= 10; LEDs--) {  //This for loop goes through all pins from LED pin 13 to 10
    digitalWrite(LEDs, HIGH);                    // This turns on the LED: voltage HIGH
    delay(200);				                           // This keeps the LED on for 200 millisecond (0.2 second)
    digitalWrite(LEDs, LOW);                     // This turns off the LED after 0.2 second	
  }
}
