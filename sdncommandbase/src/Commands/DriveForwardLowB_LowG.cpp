#include "DriveForwardLowB_LowG.h"
#include "Robot.h"

DriveForwardLowB_LowG::DriveForwardLowB_LowG()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveForwardLowB_LowG::Initialize()
{
	SetTimeout(3.1);
}

// Called repeatedly when this Command is scheduled to run
void DriveForwardLowB_LowG::Execute()
{
	Robot::drivetrain->Drive(-0.745,-0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForwardLowB_LowG::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveForwardLowB_LowG::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForwardLowB_LowG::Interrupted()
{
	End();
}
