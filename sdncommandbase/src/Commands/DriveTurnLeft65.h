#ifndef DriveTurnLeft65_H
#define DriveTurnLeft65_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveTurnLeft65: public Command
{
public:
	DriveTurnLeft65();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
