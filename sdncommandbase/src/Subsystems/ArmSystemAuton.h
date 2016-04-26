/*#ifndef ArmSystemAuton_H
#define ArmSystemAuton_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ArmSystemAuton: public Subsystem
{
private:
	Victor *up_down_1, *up_down_2;
	double drive_speed;
	//Joystick *armjoystick;
	//JoystickButton* rollerturbo;

public:
	ArmSystemAuton();
	void MoveY(double drive_speed);
	void InitDefaultCommand();
};

#endif
*/
