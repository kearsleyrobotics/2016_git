/*
 * DriveTurnRight65.h
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */

#ifndef DriveTurnRight65_H
#define DriveTurnRight65_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveTurnRight65: public Command
{
public:
	DriveTurnRight65();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
