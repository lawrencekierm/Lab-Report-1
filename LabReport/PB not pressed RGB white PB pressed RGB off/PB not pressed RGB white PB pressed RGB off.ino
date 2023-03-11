/*In this program, when the push button is pressed, it must display "0" on the
serial monitor and the 4-pin LED must be turned OFF. Inversely, when the push
button is not pressed, it must display "1" on the serial monitor and the 4-pin LED
must turned ON with white light. To achieve this white light, all pins in the 
LED must be HIGH or turned ON: Red=HIGH, Green=HIGH, BLUE=HIGH. 
Also, I have used PB programmed with internal pullup.*/
int button = 2;           // This defines the pin for button: as integer
int buttonState;          // This defines buttonState as integer
int LEDpin[] = {3, 4, 5}; // This array is to define the pins for the LED: as integer

/* The void setup is to set the inputs, outputs and etc. of the program which will 
run once in the program*/ 
void setup() {
  Serial.begin(9600);                          // This initiates the serial connection with the program
  pinMode(button, INPUT_PULLUP);               // This is to assign the button as an INPUT_PULLUP
                                               // This will assign pin 3, 4 and 5  as an output of LED pins
  for (int LEDpin = 3; LEDpin < 6; LEDpin++) { // This for loop goes through all pins 
    pinMode(LEDpin, OUTPUT);  }                // and assign them as an output 
}
/* The loop function will run over and over endlessly, making the output operatesrepeatedly*/ 
void loop() {
// When the button is pressed serial monitor will display "Button State = value"
  buttonState = digitalRead(button); /* The value of buttonState will be based on the value of 
  										                  pin 2, which is the digitalRead of the button*/
  Serial.print("Button State = ");   // This prints the phrase "Button State ="
  Serial.println(buttonState);       // This will print the value of buttonState after the phrase
  
  /* This if/else funtion turns ON or OFF the LED when push button is pressed or unpressed*/
  if (buttonState==HIGH){ 		                    // If push button is unpressed, buttonState == HIGH
     for (int LEDpin = 3; LEDpin < 6; LEDpin++) { //This for loop goes through all pins from LED pin 3 to 5
       digitalWrite(LEDpin, HIGH); }          // And write the value HIGH for all pins and produce white light
 	  }  else { 					                  	  // If push button is pressed, it writes value LOW for all pins: LED OFF
  		  for (int LEDpin = 3; LEDpin < 6; LEDpin++) { // This goes through all pins                
   	 digitalWrite(LEDpin, LOW);   }                  // It writes LOW value on all pins: LED OFF
  }
}