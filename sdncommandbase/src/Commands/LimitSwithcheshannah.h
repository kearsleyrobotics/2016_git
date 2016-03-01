#ifndef LimitSwithcheshannah_H
#define LimitSwithcheshannah_H

#include "../CommandBase.h"
#include "WPILib.h"

class LimitSwithcheshannah: public CommandBase
{
public:
	LimitSwithcheshannah();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
