#ifndef ScaleMoveCommand_H
#define ScaleMoveCommand_H

#include "../CommandBase.h"
#include "WPILib.h"

class ScaleMoveCommand: public Command
{
public:
	ScaleMoveCommand();
	ScaleMoveCommand(float speed);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
