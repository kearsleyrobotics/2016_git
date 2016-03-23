/*
 * DriveWait.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */
#include "DriveWait.h"
#include "Robot.h"

DriveWait::DriveWait() : Command("DriveWait")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveWait::Initialize()
{
	// set timeout
	SetTimeout(2.0);
}

// Called repeatedly when this Command is scheduled to run
void DriveWait::Execute()
{
	//may need to be something other then drivetrain......
	Robot::drivetrain->Drive(0.0,0.0);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveWait::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveWait::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWait::Interrupted()
{
	End();
}




