#include "OI.h"
#include "Commands/ArmUp_Downhannah.h"
#include "Commands/WheelsMoveCommand.h"
#include "Commands/WheelsMoveInCommand.h"
#include "Commands/WheelsMoveOutCommand.h"
#include "Commands/ScaleMoveUpCommand.h"
#include "Commands/ScaleMoveDownCommand.h"
#include "Robot.h"


OI::OI()
{
	TankDrivejoystick0 = new Joystick(0);
	TankDrivejoystick1 = new Joystick(1);
	armjoystick = new Joystick(2);
	roll_in = new JoystickButton(armjoystick, 7);
	roll_out = new JoystickButton(armjoystick, 6);
	roll_in->WhileHeld(new WheelsMoveInCommand);
	roll_out->WhileHeld(new WheelsMoveOutCommand);
	scale_up = new JoystickButton(TankDrivejoystick0, 5);
	scale_down = new JoystickButton(TankDrivejoystick0, 3);
	scale_up->WhileHeld(new ScaleMoveUpCommand);
	scale_down->WhileHeld(new ScaleMoveDownCommand);
	// Process operator interface input here.
	//JoystickButton* half_speed = new JoystickButton(armjoystick, 2);
	//JoystickButton* full_speed = new JoystickButton(armjoystick, 3);

	//full_speed->ToggleWhenPressed(new ArmUp_Downhannah(1));
    //half_speed->ToggleWhenPressed(new ArmUp_Downhannah(.5));
}

Joystick* OI::GetTankDrivejoystick0() {
	return TankDrivejoystick0;
}

Joystick* OI::GetTankDrivejoystick1() {
	return TankDrivejoystick1;
}

Joystick* OI::GetArmJoystick() {
	return armjoystick;
}

Button *OI::GetButtonRollIn()
{
	return roll_in;
}

Button *OI::GetButtonROllOut()
{
	return roll_out;
}

Button *OI::GetButtonScaleUp()
{
	return scale_up;
}

Button *OI::GetButtonScaleDown()
{
	return scale_down;
}

bool OI::GetRollInPressed()
{
	return roll_in->Get();
}

bool OI::GetRollOutPressed()
{
	return roll_out->Get();
}

bool OI::GetScaleUpPressed()
{
	return scale_up->Get();
}

bool OI::GetScaleDownPressed()
{
	return scale_down->Get();
}


