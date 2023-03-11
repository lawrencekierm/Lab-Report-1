/* In this program, RGB LED must light RED, GREEN, BLUE, WHITE, VIOLET, YELLOW one by one,
creating a light chaing effect only in one LED. This means that all pins must
be HIGH one by one for color RED, GREEN, BLUE, and, eventually, must be HIGH 
at the same time for white light. Additionally, I added analogWrites for 
special colors: VIOLET & YELLOW.*/
int LEDpin[3] = {
  3,  //RED
  4,  //GREEN
  5   //BLUE
  }; 
void setup() {
                                                // This will assign pin 3 to 4 as an output of the LEDs
  for (int LEDpin = 3; LEDpin < 6; LEDpin++) {  // This for loop goes through all pins 
    pinMode(LEDpin, OUTPUT);                    // and assign them as an output 
  }
}
/* The loop function will run over and over endlessly, making the output operates
repeatedly*/ 
void loop() {
// Red light using digitalWrite
  digitalWrite(3,   1);       //RED value
  digitalWrite(4, 0);         //Green value
  digitalWrite(5,  0);        //Blue value
  delay(200);                 //Delay time: 0.2 seconds 
  
// Green light using digitalWrite 
  digitalWrite(3,   0);       //RED value
  digitalWrite(4, 1);         //Green value
  digitalWrite(5, 0);         //Blue value
  delay(200);                 //Delay time: 0.2 seconds
  
// Blue light using digitalWrite 
  digitalWrite(3,   0);       //RED value
  digitalWrite(4, 0);         //Green value
  digitalWrite(5,  1);        //Blue value
  delay(200);                 //Delay time: 0.2 seconds 
 
// White light using digitalWrite
  digitalWrite(3,   1);       //RED value
  digitalWrite(4, 1);         //Green value
  digitalWrite(5,  1);        //Blue value
  delay(200);                 //Delay time: 0.2 seconds 

// Violet light using analogWrite
  analogWrite(3,   38);       //RED value
  analogWrite(4, 4);          //Green value
  analogWrite(5,  81);        //Blue value
  delay(200);                 //Delay time: 0.2 seconds               

// Yellow light using analogWrite
  analogWrite(3,   255);      //RED value
  analogWrite(4, 165);        //Green value
  analogWrite(5,  0);         //Blue value
  delay(200);                 //Delay time: 0.2 seconds
  } 

