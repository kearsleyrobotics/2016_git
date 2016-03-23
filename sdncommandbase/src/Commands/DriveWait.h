/*
 * DriveWait.h
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */

#ifndef DriveWait_H
#define DriveWait_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveWait: public Command
{
public:
	DriveWait();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
