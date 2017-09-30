#include "SetActuator.h"

SetActuator::SetActuator(Intake::ActuatorValue value)
: mValue(value)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Intake::getInstance().get());
}

// Called just before this Command runs the first time
void SetActuator::Initialize() {

	Intake::getInstance()->SetActuator(mValue);
}
