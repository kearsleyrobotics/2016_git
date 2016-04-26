#ifndef DriveWait_LowG_H
#define DriveWait_LowG_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveWait_LowG: public Command
{
public:
	DriveWait_LowG();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
