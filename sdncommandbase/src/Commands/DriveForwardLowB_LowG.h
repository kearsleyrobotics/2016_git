#ifndef DriveForwardLowB_LowG_H
#define DriveForwardLowB_LowG_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveForwardLowB_LowG: public Command
{
public:
	DriveForwardLowB_LowG();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
