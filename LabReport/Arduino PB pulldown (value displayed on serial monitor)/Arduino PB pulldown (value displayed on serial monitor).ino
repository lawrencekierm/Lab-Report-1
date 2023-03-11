/*THIS IS A PUSHBUTTON PULLDOWN
In this program, when the push button pressed, it must display "1" on the
serial monitor and must turn ON the LED. Inversely, when the push button is
not pressed, it must display "0" on the serial monitor and must keep the
LED turned OFF.Since this is a PB Pulldown, buttonState is 0 when unpressed.*/

int button = 2;    // This defines the pin for button: as integer
int buttonState;   // This defines buttonState as integer
int LED = 4; 	     // This defines the pin for LED: as integer

/* The void setup is to set the inputs, outputs and etc. of the program which will 
run once in the program*/ 
void setup() {
  Serial.begin(9600);      // This initiates the serial connection with the program
  pinMode(button, INPUT);  // This is to assign the button as an INPUT
  pinMode(LED, OUTPUT);   // This is to assign the LED as an OUTPUT
}

/* The loop function will run over and over endlessly, making the output operates repeatedly*/ 
void loop() {
// When the button is pressed serial monitor will display "Button State = value"
  buttonState = digitalRead(button); /* The value of buttonState will be based on the value of 
  										                  pin 2, which is the digitalRead of the button*/
  Serial.print("Button State = ");   // This prints the phrase "Button State ="
  Serial.println(buttonState);       // This will print the value of buttonState after the phrase
  
  /* This if/else funtion tuens ON or OFF the LED when push button is pressed or unpressed*/
  if (buttonState==HIGH){ 		      // If push button is pressed, buttonState == HIGH
    digitalWrite(LED, HIGH);}       // This turns ON the LED
  else { 					                 	// If push button is unpressed, it turns OFF the LED
  		digitalWrite(LED, LOW);
  }
}
