#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen
brain  Brain;

// VEXcode device constructors
motor LeftArmMotor = motor(PORT3, ratio18_1, false);
motor RightArmMotor = motor(PORT4, ratio18_1, false);
motor LeftIntakeMotor = motor(PORT5, ratio36_1, false);
motor RightIntakeMotor = motor(PORT6, ratio36_1, false);
motor RampMotor = motor(PORT7, ratio18_1, false);
motor LeftDriveSmart = motor(PORT1, ratio18_1, false);
motor RightDriveSmart = motor(PORT2, ratio18_1, true);
drivetrain Drivetrain = drivetrain(LeftDriveSmart, RightDriveSmart, 319.19, 295, 130, mm, 1);

// VEXcode generated functions



/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void vexcodeInit( void ) {
  // nothing to initialize
}