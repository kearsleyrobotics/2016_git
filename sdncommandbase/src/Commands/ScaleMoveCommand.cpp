#include "ScaleMoveCommand.h"
#include "Robot.h"

ScaleMoveCommand::ScaleMoveCommand() : Command("ScaleMoveCommand")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::scale);
}

ScaleMoveCommand::ScaleMoveCommand(float speed)
{
	Robot::scale->SetSpeed(speed);
}

// Called just before this Command runs the first time
void ScaleMoveCommand::Initialize()
{
	Robot::scale->SetSpeed(0);
}

// Called repeatedly when this Command is scheduled to run
void ScaleMoveCommand::Execute()
{
	Robot::scale->MoveNow();
}

// Make this return true when this Command no longer needs to run execute()
bool ScaleMoveCommand::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ScaleMoveCommand::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ScaleMoveCommand::Interrupted()
{

}
