/*
 * DriveForward.h
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */

#ifndef DriveForward_H
#define DriveForward_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveForward: public Command
{
public:
	DriveForward();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
