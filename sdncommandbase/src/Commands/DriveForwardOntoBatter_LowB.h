#ifndef DriveForwardOntoBatter_LowB_H
#define DriveForwardOntoBatter_LowB_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveForwardOntoBatter_LowB: public Command
{
public:
	DriveForwardOntoBatter_LowB();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
