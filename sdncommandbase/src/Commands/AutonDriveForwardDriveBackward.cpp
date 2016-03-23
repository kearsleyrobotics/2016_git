/*
 * AutonDriveForwardDriveBackward.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */
#include "AutonDriveForwardDriveBackward.h"

#include "DriveForward.h"
#include "DriveBackward.h"
#include "DriveWait.h"
#include "DriveTurnRight120.h"
#include "WheelsMoveSpit.h"

AutonDriveForwardDriveBackward::AutonDriveForwardDriveBackward() : CommandGroup("AutonDriveForwardDriveBackward")
{

	// Add Commands here:
	// e.g. AddSequential(new Command1());
	//      AddSequential(new Command2());
	// these will run in order.

	// To run multiple commands at the same time,
	// use AddParallel()
	// e.g. AddParallel(new Command1());
	//
	//AddSequential(new Command2());
	// Command1 and Command2 will run in parallel.

	// A command group will require all of the subsystems that each member
	// would require.
	// e.g. if Command1 requires chassis, and Command2 requires arm,
	// a CommandGroup containing them would require both the chassis and the
	// arm.
	AddSequential(new DriveForward());
	AddSequential(new WheelsMoveSpit());
	AddSequential(new DriveWait());
	AddSequential(new DriveBackward());
	AddSequential(new DriveTurnRight120());

}
