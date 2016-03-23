/*
 * DriveBackward.h
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */

#ifndef DriveBackward_H
#define DriveBackward_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveBackward: public Command
{
public:
	DriveBackward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
