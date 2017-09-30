#include "ToggleActuator.h"
#include "../Subsystems/Intake.h"

ToggleActuator::ToggleActuator() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Intake::getInstance().get());
}

// Called just before this Command runs the first time
void ToggleActuator::Initialize() {

	Intake::ActuatorValue value
		= Intake::getInstance()->IsActuatorClosed() ? Intake::kActuatorOpen : Intake::kActuatorClosed;
	Intake::getInstance()->SetActuator(value);
}
