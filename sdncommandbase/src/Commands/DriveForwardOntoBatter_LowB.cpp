#include "DriveForwardOntoBatter_LowB.h"
#include "Robot.h"

DriveForwardOntoBatter_LowB::DriveForwardOntoBatter_LowB()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveForwardOntoBatter_LowB::Initialize()
{
	SetTimeout(1.82);
}

// Called repeatedly when this Command is scheduled to run
void DriveForwardOntoBatter_LowB::Execute()
{
	Robot::drivetrain->Drive(-0.745,-0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForwardOntoBatter_LowB::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveForwardOntoBatter_LowB::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForwardOntoBatter_LowB::Interrupted()
{
	End();
}
