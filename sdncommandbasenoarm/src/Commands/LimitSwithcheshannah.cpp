#include "LimitSwithcheshannah.h"
#include "Robot.h"

LimitSwithcheshannah::LimitSwithcheshannah()
{
	Requires(Robot::LimitSwitch1);
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

// Called just before this Command runs the first time
void LimitSwithcheshannah::Initialize()
{

}

// Called repeatedly when this Command is scheduled to run
void LimitSwithcheshannah::Execute()
{
    Robot::LimitSwitch1->IsOn();
}

// Make this return true when this Command no longer needs to run execute()
bool LimitSwithcheshannah::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void LimitSwithcheshannah::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LimitSwithcheshannah::Interrupted()
{

}
