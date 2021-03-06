/*
 * AutonCheval.cpp
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */
#include "AutonCheval.h"

#include "DriveForwardReach.h"
#include "ArmLowerLowGoal.h"
//#include "ArmRaise.h"
#include "DriveWait.h"

AutonCheval::AutonCheval() : CommandGroup("AutonCheval")
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
	AddSequential(new DriveForwardReach());
	AddSequential(new ArmLowerLowGoal());
	AddSequential(new ArmLowerLowGoal());
	AddSequential(new DriveWait());
	AddSequential(new DriveForwardReach());
	//AddSequential(new ArmRaise());

}
