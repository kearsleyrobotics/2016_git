#ifndef DriveBackwardOffBatter_H
#define DriveBackwardOffBatter_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveBackwardOffBatter: public Command
{
public:
	DriveBackwardOffBatter();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
