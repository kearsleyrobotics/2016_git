#include "AutonLowBLowGShootBack.h"

#include "DriveForwardLowB_LowG.h"
#include "DriveForwardOntoBatter_LowB.h"
#include "DriveWait_LowG.h"
#include "DriveTurnRight65.h"
#include "WheelsMoveSpit.h"
#include "ArmLowerLowGoal.h"
#include "DriveBackwardOffBatter.h"
#include "DriveTurnLeft65.h"
#include "DriveBackwardLowG.h"
#include "DriveTurnRight120.h"

AutonLowBLowGShootBack::AutonLowBLowGShootBack() : CommandGroup("AutonLowBLowGShootBack")
{
	AddSequential(new DriveForwardLowB_LowG());
	AddSequential(new DriveTurnRight65());
	AddSequential(new DriveForwardOntoBatter_LowB());
	AddSequential(new ArmLowerLowGoal());
	AddParallel(new WheelsMoveSpit());
	AddSequential(new ArmLowerLowGoal());
	AddSequential(new DriveWait_LowG());
	AddSequential(new DriveBackwardOffBatter());
	AddSequential(new DriveTurnLeft65());
	AddSequential(new DriveBackwardLowG());
	//AddSequential(new DriveTurnRight120());
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(chassis);
}

