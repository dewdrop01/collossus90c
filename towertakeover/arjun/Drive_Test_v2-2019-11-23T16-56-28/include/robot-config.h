using namespace vex;

extern brain Brain;

// VEXcode devices
extern controller Controller1;
extern motor LeftArmMotor;
extern drivetrain Drivetrain;
extern motor RightArmMotor;
extern motor LeftIntakeMotor;
extern motor RightIntakeMotor;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );