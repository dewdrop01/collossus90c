/*----------------------------------------------------------------------------*/
/*                                                                            */
/*    Module:       main.cpp                                                  */
/*    Author:       C:\Users\Arjun                                            */
/*    Created:      Wed Nov 20 2019                                           */
/*    Description:  V5 project                                                */
/*                                                                            */
/*----------------------------------------------------------------------------*/

// ---- START VEXCODE CONFIGURED DEVICES ----
// Robot Configuration:
// [Name]               [Type]        [Port(s)]
// LeftArmMotor         motor         3               
// RightArmMotor        motor         4               
// LeftIntakeMotor      motor         5               
// RightIntakeMotor     motor         6               
// RampMotor            motor         7               
// Drivetrain           drivetrain    1, 2            
// ---- END VEXCODE CONFIGURED DEVICES ----

#include "vex.h"

using namespace vex;

int main() {
  // Initializing Robot Configuration. DO NOT REMOVE!

  vexcodeInit();

Drivetrain.setDriveVelocity(50,rpm); //setting drive velocity
Drivetrain.driveFor(40,inches);      //driving to cubes; inches value may change
Drivetrain.stop();                   //drivetrain to stop

LeftIntakeMotor.setVelocity(100,rpm);   //setting intake velocity
RightIntakeMotor.setVelocity(100,rpm);                            
LeftIntakeMotor.spin(fwd);               //intaking cubes
RightIntakeMotor.spin(fwd);      
LeftIntakeMotor.stop();                  //intake to stop
RightIntakeMotor.stop();


Drivetrain.driveFor(-40,inches);  //drive back to start
Drivetrain.stop();                //drivetrain motor to stop

Drivetrain.turnFor(90,degrees);   //turn 90 degrees to face goal
Drivetrain.stop();

Drivetrain.driveFor(30,inches);   //drive towards goal
Drivetrain.stop();                //drivetrain motor to stop
 
 LeftIntakeMotor.spin(reverse);    //dropping cubes in goal
 RightIntakeMotor.spin(reverse);


























































