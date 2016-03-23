#ifndef WheelsMoveSpit_H
#define WheelsMoveSpit_H

#include "../CommandBase.h"
#include "WPILib.h"

class WheelsMoveSpit: public Command
{
public:
	WheelsMoveSpit();
	WheelsMoveSpit(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
