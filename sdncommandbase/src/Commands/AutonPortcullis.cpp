#include "AutonPortcullis.h"

#include "ArmLowerLowGoal.h"
#include "DriveForward.h"

AutonPortcullis::AutonPortcullis() : CommandGroup("AutonPortcullis")
{
	AddSequential(new ArmLowerLowGoal());
	AddSequential(new ArmLowerLowGoal());
	AddSequential(new DriveForward());
}
