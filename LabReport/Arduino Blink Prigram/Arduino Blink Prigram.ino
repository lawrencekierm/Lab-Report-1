/* In this program, the LED blinks every second: One second OFF 
and one second ON. The LED is connected to pin 13 to receive the 
signal that turns it on and off. At the same time, the build-in 
LED, which is also interconnected to pin 13, turns on and off
at the same time with my LED on the breadboard*/

/* The setup function is to set the inputs or outputs of the program which will 
run once in the program*/ 

void setup() {
  pinMode(13, OUTPUT);       // This will assign pin 13 as an output of the LED
}

/* The loop function will run over and over endlessly, making the output operates
repeatedly*/ 

void loop() {
  digitalWrite(13, HIGH);  //This turns on the LED (connected to pin 13): voltage HIGH
  delay(1000);             // LED ON for 1000 millisecond (1 second)
  digitalWrite(13, LOW);   //This turns off the LED (connected to pin 13): voltage LOW
  delay(1000);             // LED OFF for 1000 millisecond (1 second)
}
