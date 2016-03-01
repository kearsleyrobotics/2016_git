#ifndef ArmUp_Downhannah_H
#define ArmUp_Downhannah_H

#include "../CommandBase.h"
#include "WPILib.h"

class ArmUp_Downhannah: public CommandBase
{
private:
	float drive_speed;
public:
	ArmUp_Downhannah();
	ArmUp_Downhannah(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
