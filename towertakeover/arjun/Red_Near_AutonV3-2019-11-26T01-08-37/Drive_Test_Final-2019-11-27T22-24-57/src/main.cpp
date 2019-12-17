/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Arjun                                            */
/*    Created:      Wed Nov 27 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// Drivetrain           drivetrain    1, 2            
// LeftArmMotor         motor         3               
// RightArmMotor        motor         4               
// LeftIntakeMotor      motor         5               
// RightIntakeMotor     motor         6               
// RampMotor            motor         7               
// Controller1          controller                    
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!
  vexcodeInit();
LeftIntakeMotor.setVelocity(100,percent);
RightIntakeMotor.setVelocity(100,percent);

RampMotor.setVelocity(50,percent);
}
