#include "DriveWait_LowG.h"
#include "Robot.h"

DriveWait_LowG::DriveWait_LowG()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveWait_LowG::Initialize()
{
	SetTimeout(1.5);
}

// Called repeatedly when this Command is scheduled to run
void DriveWait_LowG::Execute()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWait_LowG::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveWait_LowG::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWait_LowG::Interrupted()
{
	End();
}
