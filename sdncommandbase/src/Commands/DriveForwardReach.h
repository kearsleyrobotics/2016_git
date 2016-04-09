/*
 * DriveForwardReach.h
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */

#ifndef DriveForwardReach_H
#define DriveForwardReach_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveForwardReach: public Command
{
public:
	DriveForwardReach();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
