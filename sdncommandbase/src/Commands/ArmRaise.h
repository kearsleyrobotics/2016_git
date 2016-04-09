#ifndef ArmRaise_H
#define ArmRaise_H

#include "../CommandBase.h"
#include "WPILib.h"

class ArmRaise: public Command
{
private:
	float drive_speed;
public:
	ArmRaise();
	ArmRaise(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
