#include "Gripper.h"
#include "defines.h"

Gripper::Gripper() {
  pinMode(PIN_GRIPPER, OUTPUT);
  digitalWrite(PIN_GRIPPER, LOW);
}