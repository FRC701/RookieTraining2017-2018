#include "SetActuator.h"

SetActuator::SetActuator(Intake::ActuatorValue value)
: mValue(value)
{
	//comments about using requires
	//comments about using requires
	Requires(Intake::getInstance().get());
}

//Called just before this Command runs the first time
void SetActuator::Initialize() {
		Intake::getInstance()->SetActuator(mValue);
}
