#ifndef DriveTrainhannah_H
#define DriveTrainhannah_H

#include "Commands/Subsystem.h"
#include "WPILib.h"
#include "Talon.h"
#include <Joystick.h>

class DriveTrainhannah: public Subsystem
{
private:
	Victor *front_left_motor,*back_left_motor,*front_right_motor,*back_right_motor;
	RobotDrive* drive;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	DriveTrainhannah();
	void InitDefaultCommand();
	void Drive(double leftYIn, double rightYIn);
	void Drive(Joystick* TankDrivejoystick0, Joystick* TankDrivejoystick1);
	void GetStatus();
};

#endif


