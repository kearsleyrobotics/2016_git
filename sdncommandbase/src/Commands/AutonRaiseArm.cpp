/*#include "AutonRaiseArm.h"

#include "ArmRaise_LowG.h"
#include "ArmLowerLowGoal.h"
#include "WheelsMoveSpit.h"
#include "DriveWait_LowG.h"

AutonRaiseArm::AutonRaiseArm() : CommandGroup("AutonRaiseArm")
{
	AddSequential(new ArmLowerLowGoal());
	AddParallel(new WheelsMoveSpit());
	AddSequential(new ArmLowerLowGoal());
	AddSequential(new DriveWait_LowG());
	AddSequential(new ArmRaise_LowG());
	AddSequential(new WheelsMoveSpit());

}
*/
