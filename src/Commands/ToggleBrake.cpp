#include "ToggleBrake.h"
#include "../Subsystems/Elevator.h"

ToggleBrake::ToggleBrake() {
		// Use Requires() here to declare system dependencies
		// eg. Requires(Robot::chassis.get());
		Requires(Elevator::getInstance().get());
}

// Called once when the Command executes
void ToggleBrake::Initialize() {

		Elevator::BrakeValue value
						= Elevator::getInstance()->IsBrakeOn() ? Elevator::kBrakeOff : Elevator::kBrakeOn;
		Elevator::getInstance()->SetBrake(value);
}
