#include "ArmLowerLowGoal.h"
#include "Robot.h"

//ArmUp_Downhannah::ArmUp_Downhannah() : Command("ArmUp_Downhannah")
ArmLowerLowGoal::ArmLowerLowGoal() : Command("ArmLowerLowGoal")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::armsystemhannah);
}

// Called just before this Command runs the first time
ArmLowerLowGoal::ArmLowerLowGoal(float speed)
{
	Requires(Robot::armsystemhannah);
	drive_speed = speed;
}
void ArmLowerLowGoal::Initialize()
{
	// set timeout
	SetTimeout(0.25);
	drive_speed = -0.55;
}

// Called repeatedly when this Command is scheduled to run
void ArmLowerLowGoal::Execute()
{
	Robot::armsystemhannah->MoveY(drive_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool ArmLowerLowGoal::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void ArmLowerLowGoal::End()
{
	drive_speed = 0.0;
	Robot::armsystemhannah->MoveY(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmLowerLowGoal::Interrupted()
{
	End();
}
