/* Using 4-pin LED, I must set the assigned LED condition when PB is pressed or unpressed.
In this program, when the push button is not pressed, pins for RED and GREEN must be turned ON. 
On the other hand, when the push button is pressed, the pins for RED and BLUE must be turned ON.
Also, I have used PB programmed with internal pullup in this task.*/
int button = 2;           // This defines the pin for button: as integer
int buttonState;          // This defines buttonState as integer
int LEDpin[] =    {       // This array is to define the pins for the LED: as integer
3,  //RED
4,  //GREEN
5   //BLUE   
}; 
/* The void setup is to set the inputs, outputs and etc. of the program which will 
run once in the program*/ 
void setup() {
  Serial.begin(9600);                          // This initiates the serial connection with the program
  pinMode(button, INPUT_PULLUP);               // This is to assign the button as an INPUT_PULLUP
                                               // This will assign pin 3, 4 and 5  as an output of LED pins
  for (int LEDpin = 3; LEDpin < 6; LEDpin++) { // This for loop goes through all pins 
    pinMode(LEDpin, OUTPUT);  }                // and assign them as an output 
}
/* The loop function will run over and over endlessly, making the input/output operates repeatedly*/ 
void loop() {
// When the button is pressed serial monitor will display "Button State = value"
  buttonState = digitalRead(button); /* The value of buttonState will be based on the value of 
  										                  pin 2, which is the digitalRead of the button*/
  Serial.print("Button State = ");   // This prints the phrase "Button State ="
  Serial.println(buttonState);       // This will print the value of buttonState after the phrase
  
  /* This if/else funtion changes the light color of LED when push button is pressed or unpressed*/
  if (buttonState==HIGH){ 		       // If push button is unpressed, RED and GREEN must ON at the same time
      digitalWrite(3, HIGH);         // This turns ON pin for RED light
      digitalWrite(4, HIGH);         // This turns ON pin for GREEN light
      digitalWrite(5, LOW);          // This turns OFF pin for BLUE light
      
 	  }  else { 					             // If push button is pressed, RED and BLUE must ON at the same time
  		digitalWrite(3, HIGH);         // This turns ON pin for RED light      
      digitalWrite(4, LOW);          // This turns OFF pin for GREEN light
   	  digitalWrite(5, HIGH);         // This turns ON pin for BLUE light
      
  }
}







