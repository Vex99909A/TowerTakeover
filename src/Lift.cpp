#include "main.h"

bool AtDistanceLiftGoal(int threshold) {
  return (abs((int)(LiftLMotor.get_position()-LiftLMotor.get_target_position())) < threshold);
}


void Lift(double distance, int speed){
    LiftLMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
    LiftRMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
    LiftLMotor.move_relative(distance, speed);
    LiftRMotor.move_relative(distance, speed);
}


//thread for all lift controls
void Lift_fn(void* param) {

  LiftLMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);
  LiftRMotor.set_brake_mode(pros::E_MOTOR_BRAKE_BRAKE);

  while (true) {

    if (master.get_digital(DIGITAL_L1)) {
      LiftLMotor.move_voltage(7000);
      LiftRMotor.move_voltage(7000);
      //pros::delay(20);
    }
    else if (master.get_digital(DIGITAL_L2)) {
      LiftLMotor.move_voltage(-7000);
      LiftRMotor.move_voltage(-7000);
      //pros::delay(20);
    }
    else {
      LiftLMotor.move_voltage(0);
      LiftRMotor.move_voltage(0);
      //pros::delay(20);
    }

  }
}