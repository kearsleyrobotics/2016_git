#include "DriveTrainhannah.h"
#include "../RobotMap.h"
#include "Commands/TankDriveWithJoystick.h"
#include "Talon.h"
#include <Joystick.h>
DriveTrainhannah::DriveTrainhannah() :
		Subsystem("DriveTrainhannah")
{
  front_left_motor = new Victor(2);
  back_left_motor = new Victor(3);
  front_right_motor = new Victor(0);
  back_right_motor = new Victor(1);

  drive = new RobotDrive(front_left_motor,back_left_motor,front_right_motor,back_right_motor);
  //drive->SetInvertedMotor(RobotDrive::kFrontLeftMotor, true); //invert the left side motors
  //drive->SetInvertedMotor(RobotDrive::kRearLeftMotor, true); // you may need to change or remove this to match your robot

  drive->SetSafetyEnabled(false);
}

void DriveTrainhannah::InitDefaultCommand()
{
	SetDefaultCommand(new TankDriveWithJoystick());
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

void DriveTrainhannah::Drive(double leftYIn, double rightYIn)
{
	drive->TankDrive(leftYIn, rightYIn);
}

void DriveTrainhannah::Drive(Joystick* TankDrivejoystick0, Joystick* TankDrivejoystick1)
{
	Drive(TankDrivejoystick0->GetY(),TankDrivejoystick1->GetY());
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
