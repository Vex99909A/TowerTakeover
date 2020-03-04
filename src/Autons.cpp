#include "main.h"

/**auton function for RED side CLOSE to goal zone**/
void Redbasic(){
  Drive(75.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Lift(450.0, 100);
  //Lift(600.0, 100);
  pros::delay(100);
  do {
    pros::delay(20);
    Claw(-10.0, 100);
  } while (!AtDistanceLiftGoal(100));
  pros::delay(500);
  Lift(-300.0, 75);
  //Lift(-400.0, 75);
  do{
    pros::delay(20);
    Claw(-5.0, 100);
  }while(!AtDistanceLiftGoal(100));
  pros::delay(500);
  Drive(190.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Lift(-300.0, 100);
  //Lift(-200.0, 100);
  pros::delay(1000);
  Lift(700.0, 100);
  //Lift(600.0, 100);
  do {
    pros::delay(20);
    Claw(-5.0, 100);
  } while (!AtDistanceLiftGoal(100));
  pros::delay(20);
  Rotate(-285.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Drive(700.0, 50);
  Lift(-400.0, 75);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Lift(-400.0, 100);
  pros::delay(500);
  Lift(500.0, 50);
  do {
    pros::delay(20);
    Claw(-5.0, 50);
  } while (!AtDistanceLiftGoal(100));
  pros::delay(20);
  Rotate(-180.0, 75);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Drive(400.0, 75);
  pros::delay(1500);
  //Rotate(75.0, 100);
  //Drive(200.0, 75);
// pros::delay(500);
  //Drive(-50.0, 100);
  //Rotate(-50.0, 100);
  Lift(-500.0, 75);
  pros::delay(500);
  //pros::delay(5000);
  pros::delay(500);
  Claw(150.0, 100);
  pros::delay(500);
  //pros::delay(5000);
  //Lift(500.0, 50);
  //do {
  //  pros::delay(20);
  //} while (!AtDistanceLiftGoal(100));
  //pros::delay(20);
  Drive(-750.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  //Claw(-300.0, 100);
  Lift(400.0, 100);
  pros::delay(100);
}



/**auton function for BLUE side CLOSE to goal zone**/
void Bluebasic(){
  Drive(75.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Lift(450.0, 100);
  //Lift(600.0, 100);
  pros::delay(100);
  do {
    pros::delay(20);
    Claw(-10.0, 100);
  } while (!AtDistanceLiftGoal(100));
  pros::delay(500);
  Lift(-300.0, 75);
  //Lift(-400.0, 75);
  do{
    pros::delay(20);
    Claw(-5.0, 100);
  }while(!AtDistanceLiftGoal(100));
  pros::delay(500);
  Drive(190.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Lift(-300.0, 100);
  //Lift(-200.0, 100);
  pros::delay(1000);
  Lift(700.0, 100);
  //Lift(600.0, 100);
  do {
    pros::delay(20);
    Claw(-5.0, 100);
  } while (!AtDistanceLiftGoal(100));
  pros::delay(20);
  Rotate(285.0, 50);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Drive(700.0, 50);
  Lift(-400.0, 75);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Lift(-400.0, 100);
  pros::delay(500);
  Lift(500.0, 50);
  do {
    pros::delay(20);
    Claw(-5.0, 50);
  } while (!AtDistanceLiftGoal(100));
  pros::delay(20);
  Rotate(180.0, 75);
  //Rotate(200.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  Drive(400.0, 75);
  pros::delay(1500);
  //Rotate(75.0, 100);
  //Drive(200.0, 75);
  //pros::delay(500);
  //Drive(-50.0, 100);
  //Drive(-50.0, 100);
//  pros::delay(500);
  //Rotate(50.0, 100);
  Lift(-500.0, 75);
  pros::delay(500);
  //pros::delay(5000);
  //Drive(100, 50);
  pros::delay(500);
  Claw(150.0, 100);
  pros::delay(500);
  //pros::delay(5000);
  //Lift(500.0, 50);
  //do {
  //  pros::delay(20);
  //} while (!AtDistanceLiftGoal(100));
  //pros::delay(20);
  Drive(-750.0, 100);
  do {
    pros::delay(20);
  } while (!AtDistanceDriveGoal(5));
  pros::delay(20);
  //Claw(-300.0, 100);
  Lift(400.0, 100);
  pros::delay(100);
}



//Basic auto function - 1 cube
void basic(){
  Drive(-800, 100);
  pros::delay(2000);
  Drive(1000, 100);
  pros::delay(2000);
  Lift(800.0, 100);
  pros::delay(100);
  do {
    pros::delay(20);
    Claw(-10.0, 100);
  } while (!AtDistanceLiftGoal(100));
  pros::delay(20);
  Lift(-600.0, 100);
  do{
    pros::delay(20);
    Claw(-10.0, 100);
  }while(!AtDistanceLiftGoal(100));
  Lift(-250.0, 100);
  pros::delay(500);
  Claw(50.0, 100);
  pros::delay(250);
  Lift(300.0, 100);
  do{
    pros::delay(20);
    Claw(10.0, 100);
    Drive(-20.0, 100);
  }while(!AtDistanceLiftGoal(100));
}


/**varirables and functions array for auton selector**/
int autonselector = 0;
const char *titles[] = {"Redbasic", "Bluebasic", "basic", "Skills Auton"};

void (*scripts[])() = {&Redbasic, &Bluebasic, &basic, &SkillsAuton};

void LCDScriptExecute() {scripts[autonselector]();}
