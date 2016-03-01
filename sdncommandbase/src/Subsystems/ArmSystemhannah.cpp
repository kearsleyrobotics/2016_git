#include "ArmSystemhannah.h"
#include "../RobotMap.h"
#include "Robot.h"
#include "Commands/ArmUp_Downhannah.h"
#include "Commands/LimitSwithcheshannah.h"

ArmSystemhannah::ArmSystemhannah():Subsystem("ArmSystemhannah")
{
	up_down_1 = new Victor(4);
    up_down_2 = new Victor(5);
	drive_speed = 0;
	Joystick *armjoystick = Robot::oi->GetArmJoystick();
	rollerturbo = new JoystickButton(armjoystick,8);

}

void ArmSystemhannah::MoveY(float drive_speed)
{
	float y;
	y = armjoystick->GetY();
    if(Robot::LimitSwitch1->IsOn()&&(y<0))
	{
    	y = 0;
	}
	else if((rollerturbo->Get()==1)&&(y>0))
	{
		y *= 1;
	}
	//else if((rollerturbo->Get()==1)&&(y<=0))
	//{
		//y *= drive_speed;
	//}
	//else if((rollerturbo->Get()==0))
	//{
		//y *= drive_speed;
	//}
	else
	{
		y *= drive_speed;
	}
	up_down_1->Set(y);
	up_down_2->Set(y);
}

void ArmSystemhannah::InitDefaultCommand()
{
	SetDefaultCommand(new ArmUp_Downhannah());
	 //Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
