/*
 * DriveTurnRight120.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */
#include "DriveTurnRight120.h"
#include "Robot.h"

DriveTurnRight120::DriveTurnRight120() : Command("DriveTurnRight120")
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
	Requires(Robot::drivetrain);
}

// Called just before this Command runs the first time
void DriveTurnRight120::Initialize()
{
	// set timeout
	SetTimeout(1.25);
}

// Called repeatedly when this Command is scheduled to run
void DriveTurnRight120::Execute()
{
	//motor sides             left,right
	Robot::drivetrain->Drive(-0.75,0.75);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveTurnRight120::IsFinished()
{
	return (IsTimedOut());
}

// Called once after isFinished returns true
void DriveTurnRight120::End()
{
	Robot::drivetrain->Drive(0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveTurnRight120::Interrupted()
{
	End();
}




