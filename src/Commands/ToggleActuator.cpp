#include "ToggleActuator.h"
#include "../Subsystems/Intake.h"

ToggleActuator::ToggleActuator() {


	Requires(Intake::getInstance().get());
}


void ToggleActuator::Initialize() {

	Intake::ActuatorValue value
		= Intake::getInstance()->IsActuatorClosed() ? Intake::kActuatorOpen : Intake::kActuatorClosed;
	Intake::getInstance()->SetActuator(value);
}
