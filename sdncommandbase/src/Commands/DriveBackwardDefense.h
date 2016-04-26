#ifndef DriveBackwardDefense_H
#define DriveBackwardDefense_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveBackwardDefense: public Command
{
public:
	DriveBackwardDefense();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
