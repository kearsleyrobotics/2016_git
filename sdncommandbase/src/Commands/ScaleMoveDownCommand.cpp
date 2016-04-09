#include "ScaleMoveDownCommand.h"
#include "Robot.h"

ScaleMoveDownCommand::ScaleMoveDownCommand()
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

ScaleMoveDownCommand::ScaleMoveDownCommand(float speed)
{
	Robot::scale->SetSpeed(speed);
}

// Called just before this Command runs the first time
void ScaleMoveDownCommand::Initialize()
{
	Robot::scale->SetSpeed(.75);
}

// Called repeatedly when this Command is scheduled to run
void ScaleMoveDownCommand::Execute()
{
	Robot::scale->MoveNow();
}

// Make this return true when this Command no longer needs to run execute()
bool ScaleMoveDownCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ScaleMoveDownCommand::End()
{
	Robot::scale->SetSpeed(0);
	Robot::scale->MoveNow();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ScaleMoveDownCommand::Interrupted()
{
	End();
}
