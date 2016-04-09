#include "ArmRaise.h"
#include "Robot.h"

//ArmUp_Downhannah::ArmUp_Downhannah() : Command("ArmUp_Downhannah")
ArmRaise::ArmRaise() : Command("ArmRaise")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::armsystemhannah);
}

// Called just before this Command runs the first time
ArmRaise::ArmRaise(float speed)
{
	Requires(Robot::armsystemhannah);
	drive_speed = speed;
}
void ArmRaise::Initialize()
{
	// set timeout
	SetTimeout(0.25);
	drive_speed = 0.55;
}

// Called repeatedly when this Command is scheduled to run
void ArmRaise::Execute()
{
	Robot::armsystemhannah->MoveY(drive_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool ArmRaise::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void ArmRaise::End()
{
	drive_speed = 0.0;
	Robot::armsystemhannah->MoveY(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmRaise::Interrupted()
{
	End();
}
