#include "DIO.h"
#include "../RobotMap.h"
#include "Commands/LimitSwithcheshannah.h"
#include <string>

DIO::DIO():Subsystem("DIO")
{
	x = 1;
	limit_switch_1 = new DigitalInput(11);
}

void DIO::InitDefaultCommand()
{
	SetDefaultCommand(new LimitSwithcheshannah());
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void DIO::SetPort(int y, std::string nameIn)
{
	limit_switch_1 = new DigitalInput(y);
	x = y;
	name = nameIn;

}

bool DIO::IsOn()
{
	if (limit_switch_1->Get() == 1)
	{
		SmartDashboard::PutBoolean(name, false);
		return true;
	}
	else
	{
		SmartDashboard::PutBoolean(name, true);
		return false;
	}
}

bool DIO::IsOff()
{
	if (limit_switch_1->Get() == 1)
	{
		SmartDashboard::PutBoolean(name, true);
		return false;
	}
	else
	{
		SmartDashboard::PutBoolean(name, false);
		return true;
	}
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
