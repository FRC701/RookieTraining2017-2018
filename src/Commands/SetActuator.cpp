#include "SetActuator.h"

SetActuator::SetActuator(Intake::ActuatorValue value)
: mValue(value)
{
Requires(Intake::getInstance().get());
}
void SetActuator::Initialize() {
	Intake::getInstance()->SetActuator(mValue);
}


