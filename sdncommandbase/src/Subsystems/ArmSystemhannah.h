#ifndef ArmSystemhannah_H
#define ArmSystemhannah_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ArmSystemhannah: public Subsystem
{
private:
	Victor *up_down_1, *up_down_2;
	float drive_speed;
	Joystick *armjoystick;
	JoystickButton* rollerturbo;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	ArmSystemhannah();
	void MoveY(float drive_speed);
	//void MoveX(float drive_speed);
	void InitDefaultCommand();
};

#endif
