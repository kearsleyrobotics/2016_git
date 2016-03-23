/*
 * DriveBackward.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */
#include "DriveBackward.h"
#include "Robot.h"

DriveBackward::DriveBackward() : Command("DriveBackward")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveBackward::Initialize()
{
	// set timeout
	SetTimeout(2.1);
}

// Called repeatedly when this Command is scheduled to run
void DriveBackward::Execute()
{
	//motor sides            left,right
	Robot::drivetrain->Drive(0.75,0.74);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveBackward::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveBackward::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveBackward::Interrupted()
{
	End();
}




