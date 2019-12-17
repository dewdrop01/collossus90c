using namespace vex;

extern brain Brain;

// VEXcode devices
extern drivetrain Drivetrain;
extern motor LeftArmMotor;
extern motor RightArmMotor;
extern motor LeftIntakeMotor;
extern motor RightIntakeMotor;
extern motor RampMotor;
extern controller Controller1;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );