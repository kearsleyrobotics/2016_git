#include "ScaleMoveUpCommand.h"
#include "Robot.h"

ScaleMoveUpCommand::ScaleMoveUpCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

ScaleMoveUpCommand::ScaleMoveUpCommand(float speed)
{
	Robot::scale->SetSpeed(speed);
}

// Called just before this Command runs the first time
void ScaleMoveUpCommand::Initialize()
{
	Robot::scale->SetSpeed(-.75);
}

// Called repeatedly when this Command is scheduled to run
void ScaleMoveUpCommand::Execute()
{
	Robot::scale->MoveNow();
}

// Make this return true when this Command no longer needs to run execute()
bool ScaleMoveUpCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ScaleMoveUpCommand::End()
{
	Robot::scale->SetSpeed(0);
	Robot::scale->MoveNow();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ScaleMoveUpCommand::Interrupted()
{
	End();
}
