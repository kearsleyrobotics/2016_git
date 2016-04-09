#ifndef ArmLowerLowGoal_H
#define ArmLowerLowGoal_H

#include "../CommandBase.h"
#include "WPILib.h"

class ArmLowerLowGoal: public Command
{
private:
	float drive_speed;
public:
	ArmLowerLowGoal();
	ArmLowerLowGoal(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
