#include "RollerWheels.h"
#include "Commands/WheelsMoveCommand.h"
#include "../RobotMap.h"
//#include "Commands/WheelsMoveInCommand.h"
//#include "COmmands/WheelsMoveOutCommand.h"

RollerWheels::RollerWheels():Subsystem("wheel movement")
{
	rollerMotor = new Victor(6);
	speed = 0;
}

void RollerWheels::SetSpeed(float speed_in)
{
	speed = speed_in;
}

void RollerWheels::MoveNow()
{
	rollerMotor->Set(speed);
}

void RollerWheels::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//SetDefaultCommand(new WheelsMoveInCommand());
	//SetDefaultCommand(new WheelsMoveOutCommand());
	SetDefaultCommand(new WheelsMoveCommand);

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
