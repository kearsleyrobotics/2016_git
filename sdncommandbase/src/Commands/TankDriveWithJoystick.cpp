#include "TankDriveWithJoystick.h"
#include "Robot.h"
//#include <Joystick.h>

TankDriveWithJoystick::TankDriveWithJoystick() : CommandBase("TankDriveWithJoystick")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);

	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void TankDriveWithJoystick::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void TankDriveWithJoystick::Execute()
{
	Robot::drivetrain->Drive((Robot::oi->GetTankDrivejoystick0()), (Robot::oi->GetTankDrivejoystick1()));
	//Robot::drivetrain->GetStatus();
}
// Make this return true when this Command no longer needs to run execute()
bool TankDriveWithJoystick::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void TankDriveWithJoystick::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDriveWithJoystick::Interrupted()
{
     End();
}
