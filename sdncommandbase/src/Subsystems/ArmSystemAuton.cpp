/*#include "ArmSystemAuton.h"
#include "../RobotMap.h"
#include "Robot.h"
//#include "Commands/ArmUp_Downhannah.h"

ArmSystemAuton::ArmSystemAuton():Subsystem("ArmSystemAuton")
{
	up_down_1 = new Victor(4);
	up_down_2 = new Victor(5);
	//drive_speed = 0;
	//armjoystick = Robot::oi->GetArmJoystick();
	//rollerturbo = new JoystickButton(armjoystick,8);
}

void ArmSystemAuton::MoveY(double drive_speed)
{

	if(drive_speed < -0.5)
	{
		y = drive_speed;
	}
	else
	{
		y = armjoystick->GetY();
	if ((rollerturbo->Get()==1)&&(y<0))
	{
		y *=1;
	}
	else
	{
		y *= drive_speed;
	}
	}

	up_down_1->Set(drive_speed);
	up_down_2->Set(drive_speed);
}

void ArmSystemAuton::InitDefaultCommand()
{
	//SetDefaultCommand(new ArmUp_Downhannah());
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
*/
