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
LeftIntakeMotor.spinFor(5,turns);       //intaking cubes, using turns to declare time spent running intake motors
RightIntakeMotor.spinFor(5,turns);
Drivetrain.driveFor(5.5,inches);
LeftIntakeMotor.spinFor(5,turns);       //intaking cubes, using turns to declare time spent running intake motors
RightIntakeMotor.spinFor(5,turns);  
Drivetrain.driveFor(5.5,inches); 
LeftIntakeMotor.spinFor(5,turns);       //intaking cubes, using turns to declare time spent running intake motors
RightIntakeMotor.spinFor(5,turns);
Drivetrain.driveFor(5.5,inches);
LeftIntakeMotor.spinFor(5,turns);       //intaking cubes, using turns to declare time spent running intake motors
RightIntakeMotor.spinFor(5,turns);        
LeftIntakeMotor.stop();                  //intake to stop
RightIntakeMotor.stop();
Drivetrain.stop();










Drivetrain.drive(reverse);
Drivetrain.driveFor(5,inches);  //drive back to start
Drivetrain.stop();                //drivetrain motor to stop

Drivetrain.turnFor(-90,degrees);   //turn 90 degrees to face goal
Drivetrain.stop();

Drivetrain.driveFor(20,inches);   //drive towards goal
Drivetrain.stop();                //drivetrain motor to stop
 
 LeftIntakeMotor.spin(reverse);    //dropping cubes in goal
 RightIntakeMotor.spin(reverse);
 LeftIntakeMotor.spinFor(20,turns);


























































