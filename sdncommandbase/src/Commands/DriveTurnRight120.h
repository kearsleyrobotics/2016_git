/*
 * DriveTurnRight120.h
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */

#ifndef DriveTurnRight120_H
#define DriveTurnRight120_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveTurnRight120: public Command
{
public:
	DriveTurnRight120();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
