#ifndef DriveBackwardLowG_H
#define DriveBackwardLowG_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveBackwardLowG: public Command
{
public:
	DriveBackwardLowG();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
