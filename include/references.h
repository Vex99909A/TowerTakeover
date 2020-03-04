//define all motor ports constant variables here
/*drivetrain motor ports*/
#define FLMotorPort 1
#define FRMotorPort 10
#define BLMotorPort 19
#define BRMotorPort 16
/*lift motor ports*/
#define LiftLMotorPort 7
#define LiftRMotorPort 3
/*cube claw motor port*/
#define ClawMotorPort 13
//port 4 fried
//define all sensor ports constant variables here
/**
#define GyroPort 1
**/

 //declare global motor object variables here
 /*drivetrain motor variables*/
extern pros::Motor FLMotor;
extern pros::Motor FRMotor;
extern pros::Motor BLMotor;
extern pros::Motor BRMotor;
 /*lift motor variables*/
extern pros::Motor LiftLMotor;
extern pros::Motor LiftRMotor;
/*cube claw motor variables*/
extern pros::Motor ClawMotor;

 //declare global controller object variable here
extern pros::Controller master;
extern pros::Controller partner;

//declare global sensor object variables here
/**
extern pros::ADIGyro gyro;
**/

//declare global variables that map controller joysticks for drivetrain variables
extern int LeftControl;
extern int RightControl;
extern int power;
extern int turn;

//declare drive train function prototype
/*drive train task thread function prototype*/
void DriveTrain_fn(void* param);
/*drive train functions*/
void Drive(double, int);
void DriveTarget(double, int);

void Rotate(double, int);
void RotateTarget(double, int);

bool AtDistanceDriveGoal(int);

//declare lift function prototype
void Lift_fn(void* param);
/*lift functions*/
void Lift(double, int);
void LiftTarget(double, int);

bool AtDistanceLiftGoal(int);

//declare claw function prototype
void Claw_fn(void* param);
void Claw(double, int);

bool AtDistanceClawGoal(int);


//declare functions for antonomous.cpp
/* function for red alliance side close to goal zone*/
void basic();
void Bluebasic();
void Redbasic();

void SkillsAuton();

/* variables and functions for auton selector */
extern int autonselector;
extern const char *titles[4];
extern void (*scripts[4])();

void LCDScriptExecute();
