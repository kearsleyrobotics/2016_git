/*#ifndef ScaleSystem_H
#define ScaleSystem_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class ScaleSystem: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon *scaleMotor;
	float speed;
public:
	ScaleSystem();
	void InitDefaultCommand();
	void SetSpeed(float speed_in);
	void MoveNow();
};

#endif
*/
