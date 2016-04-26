#include "DriveBackwardOffBatter.h"
#include "Robot.h"

DriveBackwardOffBatter::DriveBackwardOffBatter()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveBackwardOffBatter::Initialize()
{
	SetTimeout(1.47);
}

// Called repeatedly when this Command is scheduled to run
void DriveBackwardOffBatter::Execute()
{
	Robot::drivetrain->Drive(0.745,0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveBackwardOffBatter::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveBackwardOffBatter::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveBackwardOffBatter::Interrupted()
{
	End();
}
