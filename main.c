
/*
 * Blink with variable
 * 
 * turns LED on and off repeatedly, 
 * but the interval increases by 1 second each time
 * 
 * Feb 19
 * Sophie Nguyen
 */

 int blinkTime = 1000;
 
 void setup() {
   //initialize digital pin LED_BUILTIN as an output
   pinMode(LED_BUILTIN, OUTPUT);
 }
 
 void loop() {
   //turn LED on
   digitalWrite(LED_BUILTIN, HIGH);
   // wait for 1 second
   delay(blinkTime);
   //turn LED off
   digitalWrite(LED_BUILTIN, LOW);
   //wait one second
   delay(blinkTime);
 
   //dd one second to variable
   blinkTime = blinkTime + 1000;
 }