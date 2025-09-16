#include <Stepper.h>

//Initialize rotation steps
const int rotation=2048;

//Create stepper object
Stepper carStepper(rotation, 9, 11, 10, 12);

void setup() {
  //Set stepper motor speed
  carStepper.setSpeed(10);
}

void loop() {
  //Stepper motor forward and backward loop
  carStepper.step(rotation);
  delay(1000);
  carStepper.step(-rotation);
}
