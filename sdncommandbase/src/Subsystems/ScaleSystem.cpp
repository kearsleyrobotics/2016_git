/*#include "ScaleSystem.h"
#include "Commands/ScaleMoveCommand.h"
#include "../RobotMap.h"
//#include "Commands/WheelsMoveInCommand.h"
//#include "COmmands/WheelsMoveOutCommand.h"

ScaleSystem::ScaleSystem():Subsystem("scale movement")
{
	//scaleMotor = new Victor(7);
	//CANTalon scaleMotor;
	scaleMotor = new CANTalon(1);
	speed = 0;
}

void ScaleSystem::SetSpeed(float speed_in)
{
	speed = speed_in;
}

void ScaleSystem::MoveNow()
{
	scaleMotor->Set(speed);
}

void ScaleSystem::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	//SetDefaultCommand(new WheelsMoveInCommand());
	//SetDefaultCommand(new WheelsMoveOutCommand());
	//SetDefaultCommand(new ScaleMoveCommand);

}

// Put methods for controlling this subsystem
// here. Call these from Commands.
*/
