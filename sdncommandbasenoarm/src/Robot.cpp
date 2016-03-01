#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ExampleCommand.h"
#include "Commands/TankDriveWithJoystick.h"
#include "CommandBase.h"
#include "Robot.h"
#include <stdio.h>
//#include "Commands/ArmUp_Downhannah.h"
#include "Commands/WheelsMoveCommand.h"
#include "Commands/LimitSwithcheshannah.h"
#include "Commands/WheelsMoveInCommand.h"
#include "Commands/WheelsMoveOutCommand.h"


DriveTrainhannah* Robot::drivetrain = NULL;
OI* Robot::oi = NULL;
//ArmSystemhannah *Robot::armsystemhannah = NULL;
RollerWheels* Robot::rollers = NULL;
DIO *Robot::LimitSwitch1 = NULL;

void Robot::RobotInit()
{
	drivetrain = new DriveTrainhannah();
	oi = new OI();
	//armsystemhannah = new ArmSystemhannah();
	//arm_up_down = new ArmUp_Downhannah();
	rollers = new RollerWheels();
	LimitSwitch1 = new DIO();
	LimitSwitch1->SetPort(0, "Limit Switch #1");
	limitswitch = new LimitSwithcheshannah();
	wheelsmovecommand = new WheelsMoveCommand();
}

/**
 * This function is called once each time the robot enters Disabled mode.
 * You can use it to reset any subsystem information you want to clear when
 * the robot is disabled.
 */


/**
 * This autonomous (along with the chooser code above) shows how to select between different autonomous modes
 * using the dashboard. The sendable chooser code works with the Java SmartDashboard. If you prefer the LabVIEW
 * Dashboard, remove all of the chooser code and uncomment the GetString code to get the auto name from the text box
 * below the Gyro
 *
 * You can add additional auto modes by adding additional commands to the chooser code above (like the commented example)
 * or additional comparisons to the if-else structure below with additional strings & commands.
 */
void Robot::AutonomousInit()
{
	/* std::string autoSelected = SmartDashboard::GetString("Auto Selector", "Default");
	if(autoSelected == "My Auto") {
		autonomousCommand.reset(new MyAutoCommand());
	} else {
		autonomousCommand.reset(new ExampleCommand());
	} */


}

void Robot::AutonomousPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::TeleopInit()
{
	// This makes sure that the autonomous stops running when
	// teleop starts running. If you want the autonomous to
	// continue until interrupted by another command, remove
	// this line or comment it out.

}

void Robot::TeleopPeriodic()
{
	Scheduler::GetInstance()->Run();
}

void Robot::TestPeriodic()
{
	LiveWindow::GetInstance()->Run();
}


START_ROBOT_CLASS(Robot)

