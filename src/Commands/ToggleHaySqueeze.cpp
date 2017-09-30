#include "ToggleHaySqueeze.h"
#include "../Subsystems/Elevator.h"

ToggleHaySqueeze::ToggleHaySqueeze() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Elevator::getInstance().get());
}

// Called once when the command executes
void ToggleHaySqueeze::Initialize() {

	Elevator::HaySqueezeValue value
			= Elevator::getInstance()->IsHaySqueezepen() ? Elevator::kClose : Elevator::kOpen;
	Elevator::getInstance()->SetHaySqueeze(value);
}
