/*
 * DriveTurnRight65.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */
#include "DriveTurnRight65.h"
#include "Robot.h"

DriveTurnRight65::DriveTurnRight65() : Command("DriveTurnRight65")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveTurnRight65::Initialize()
{
	// set timeout
	SetTimeout(0.47);
}

// Called repeatedly when this Command is scheduled to run
void DriveTurnRight65::Execute()
{
	//motor sides             left,right
	Robot::drivetrain->Drive(-0.75,0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveTurnRight65::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveTurnRight65::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveTurnRight65::Interrupted()
{
	End();
}




