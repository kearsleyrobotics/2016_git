#include "DriveTurnLeft65.h"
#include "Robot.h"

DriveTurnLeft65::DriveTurnLeft65()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveTurnLeft65::Initialize()
{
	SetTimeout(0.36);
}

// Called repeatedly when this Command is scheduled to run
void DriveTurnLeft65::Execute()
{
	Robot::drivetrain->Drive(0.75,-0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveTurnLeft65::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveTurnLeft65::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveTurnLeft65::Interrupted()
{
	End();
}
