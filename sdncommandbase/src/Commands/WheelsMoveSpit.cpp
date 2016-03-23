#include "WheelsMoveSpit.h"
#include "Robot.h"

WheelsMoveSpit::WheelsMoveSpit() : Command("WheelsMoveSpit")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::rollers);
}

WheelsMoveSpit::WheelsMoveSpit(float speed)
{
	Robot::rollers->SetSpeed(speed);
}

// Called just before this Command runs the first time
void WheelsMoveSpit::Initialize()
{
	// set timeout
	SetTimeout(0.25);
	Robot::rollers->SetSpeed(-0.75);
}

// Called repeatedly when this Command is scheduled to run
void WheelsMoveSpit::Execute()
{
	Robot::rollers->MoveNow();
}

// Make this return true when this Command no longer needs to run execute()
bool WheelsMoveSpit::IsFinished()
{
	return (IsTimedOut());
	//return false;
}

// Called once after isFinished returns true
void WheelsMoveSpit::End()
{
	Robot::rollers->SetSpeed(0);
	Robot::rollers->MoveNow();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WheelsMoveSpit::Interrupted()
{
	End();
}
