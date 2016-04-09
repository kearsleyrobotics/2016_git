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
	Button* scale_up;
	Button* scale_down;

public:
	OI();
	Joystick* GetTankDrivejoystick0();
	Joystick* GetTankDrivejoystick1();
	Joystick* GetArmJoystick();
	Button *GetButtonRollIn();
	Button *GetButtonROllOut();
	Button *GetButtonScaleUp();
	Button *GetButtonScaleDown();
	bool GetRollInPressed();
	bool GetRollOutPressed();
	bool GetScaleUpPressed();
	bool GetScaleDownPressed();
};

#endif
