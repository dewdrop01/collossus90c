using namespace vex;

extern brain Brain;

// VEXcode devices
extern drivetrain Drivetrain;
extern motor LeftIntakeMotor;
extern motor LeftArmMotor;
extern motor RightArmMotor;
extern motor RightIntakeMotor;
extern controller Controller1;
extern motor RampMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );