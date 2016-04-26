#include "AutonCrossThreeSpitBack.h"

#include "DriveForwardThree.h"
#include "WheelsMoveSpit.h"
#include "DriveBackwardDefense.h"
#include "DriveWait.h"


AutonCrossThreeSpitBack::AutonCrossThreeSpitBack() : CommandGroup("AutonCrossThreeSpitBack")
{
	//AddSequential(new DriveWait());
	//AddSequential(new DriveWait());
	AddSequential(new DriveWait());
	AddSequential(new DriveWait());
	AddSequential(new DriveForwardThree());
	AddSequential(new WheelsMoveSpit());
	AddSequential(new DriveBackwardDefense());
}
