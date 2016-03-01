
//#ifndef MY_ROBOT_H_
#define MY_ROBOT_H_

#include "WPILib.h"
#include "Commands/Command.h"

#include "Subsystems/DriveTrainhannah.h"
#include "OI.h"
//#include "Subsystems/ArmSystemhannah.h"
#include "Subsystems/RollerWheels.h"
#include "Subsystems/DIO.h"

class Robot: public IterativeRobot{
public:
	static DriveTrainhannah* drivetrain;
	static OI* oi;
	//static ArmSystemhannah *armsystemhannah;
	static RollerWheels *rollers;
	static DIO *LimitSwitch1;
private:
	//Command *arm_up_down;
	//Command *wheels_move_command;
	Command *limitswitch;
	Command *wheelsmovecommand;

	void RobotInit();
	void AutonomousInit();
	void AutonomousPeriodic();
	void TeleopInit();
	void TeleopPeriodic();
	void TestPeriodic();
};

//#endif /* ROBOT_H_ */

