#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:
	Joystick* TankDrivejoystick0;
	Joystick* TankDrivejoystick1;
	Joystick* armjoystick;
	Button* roll_in;
	Button* roll_out;

public:
	OI();
	Joystick* GetTankDrivejoystick0();
	Joystick* GetTankDrivejoystick1();
	Joystick* GetArmJoystick();
	Button *GetButtonRollIn();
	Button *GetButtonROllOut();
	bool GetRollInPressed();
	bool GetRollOutPressed();
};

#endif
