#ifndef TankDriveWithJoystick_H
#define TankDriveWithJoystick_H

#include "../CommandBase.h"
#include "WPILib.h"
//#include <Joystick.h>

class TankDriveWithJoystick: public CommandBase
{
public:
	TankDriveWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
