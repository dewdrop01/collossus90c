using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor LeftArmMotor;
extern motor RightArmMotor;
extern motor LeftIntakeMotor;
extern motor RightIntakeMotor;
extern motor RampMotor;
extern drivetrain Drivetrain;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Text.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );