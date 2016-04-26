#include "OI.h"
#include "Commands/ArmUp_Downhannah.h"
#include "Commands/WheelsMoveCommand.h"
#include "Commands/WheelsMoveInCommand.h"
#include "Commands/WheelsMoveOutCommand.h"
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


bool OI::GetRollInPressed()
{
	return roll_in->Get();
}

bool OI::GetRollOutPressed()
{
	return roll_out->Get();
}



