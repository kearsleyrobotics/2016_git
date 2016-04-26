#include "DriveBackwardDefense.h"
#include "Robot.h"

DriveBackwardDefense::DriveBackwardDefense()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveBackwardDefense::Initialize()
{
	SetTimeout(2.4);
}

// Called repeatedly when this Command is scheduled to run
void DriveBackwardDefense::Execute()
{
	Robot::drivetrain->Drive(0.75,0.745);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveBackwardDefense::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveBackwardDefense::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveBackwardDefense::Interrupted()
{
	End();
}
