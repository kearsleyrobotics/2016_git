/*
 * DriveForwardThree.h
 *
 *  Created on: Mar 2, 2016
 *      Author: frc5150
 */

#ifndef DriveForwardThree_H
#define DriveForwardThree_H

#include "../CommandBase.h"
#include "WPILib.h"

class DriveForwardThree: public Command
{
public:
	DriveForwardThree();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
