#include "DriveBackwardLowG.h"
#include "Robot.h"

DriveBackwardLowG::DriveBackwardLowG()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveBackwardLowG::Initialize()
{
	Robot::drivetrain->Drive(0.75,0.745);
}

// Called repeatedly when this Command is scheduled to run
void DriveBackwardLowG::Execute()
{
	SetTimeout(2.8);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveBackwardLowG::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveBackwardLowG::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveBackwardLowG::Interrupted()
{
	End();
}
