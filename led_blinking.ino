//BY TurboTronics~
//Like and subscribe!!
// #Beginner_To_Professional series Part 1

//Arduino Uno R3/R4 Builtin led blinking code. Code's Link in description.

int myled = LED_BUILTIN; //This is how we assign variables and values in Arduino code
            //LED_BUILTIN is a term used to tell arduino that we are using the led which comes pre
            //installed on arduino uno board.

void setup() {  //In the function setup(), the code only runs once. Here we generally declare our 
                // pins as input or output pins or we write the code which we want to run once only.

  pinMode(myled, OUTPUT); //pinMode() is a function which tells arduino whether the pin is an input
                          //pin or an output pin.
  }

void loop() { // in function loop() the code repeats itself infinitely again and again. we generally 
              // write our main code here.
  digitalWrite(myled, HIGH); //digitalWrite() is a function which is used to turn on or off a digital pin.
  delay(1000); //delay(time in milliseconds) is used to pause the code for certain period of time.
  digitalWrite(myled, LOW);
  delay(1000);
  //It should also be noted that we always put a semi colon ; after each function in arduino code.
}
//As for now, I am using arduino Uno R4 wifi, but the code will run perfectly on Arduino uno r3 as well!

//Arduino Uno r4 wifi has many changes as compared to arduino uno r3, so I highly recommend that if you 
//are a beginner, purchase original arduino uno r4 wifi. Link to purchase is in description!

//Please support me just by subscribing and watching my videos till last, so I will also bring unboxing 
//videos on my channel. I will do all my efforts to turn all you beginners into professionals!!
