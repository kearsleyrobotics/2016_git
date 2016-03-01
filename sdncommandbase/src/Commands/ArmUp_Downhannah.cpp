#include "ArmUp_Downhannah.h"
#include "Robot.h"

//ArmUp_Downhannah::ArmUp_Downhannah() : Command("ArmUp_Downhannah")
ArmUp_Downhannah::ArmUp_Downhannah() : Command("ArmUp_DownHannah")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::armsystemhannah);
}

// Called just before this Command runs the first time
ArmUp_Downhannah::ArmUp_Downhannah(float speed)
{
	Requires(Robot::armsystemhannah);
	drive_speed = speed;
}
void ArmUp_Downhannah::Initialize()
{
	drive_speed = .5;
}

// Called repeatedly when this Command is scheduled to run
void ArmUp_Downhannah::Execute()
{
	Robot::armsystemhannah->MoveY(drive_speed);
}

// Make this return true when this Command no longer needs to run execute()
bool ArmUp_Downhannah::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ArmUp_Downhannah::End()
{
	Robot::armsystemhannah->MoveY(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmUp_Downhannah::Interrupted()
{
	End();
}
