/*
 * AutonLowBLowGShoot.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */
#include "AutonLowBLowGShoot.h"

#include "DriveForwardThree.h"
#include "DriveForward.h"
#include "DriveWait.h"
#include "DriveTurnRight65.h"
#include "WheelsMoveSpit.h"
#include "ArmLowerLowGoal.h"

AutonLowBLowGShoot::AutonLowBLowGShoot() : CommandGroup("AutonLowBLowGShoot")
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
	AddSequential(new DriveForwardThree());
	AddSequential(new DriveTurnRight65());
	AddSequential(new DriveForward());
	AddSequential(new ArmLowerLowGoal());
	AddParallel(new WheelsMoveSpit());
	AddSequential(new ArmLowerLowGoal());
	//AddSequential(new DriveWait());
	//AddSequential(new DriveBackward());
	//AddSequential(new DriveTurnRight120());

}
