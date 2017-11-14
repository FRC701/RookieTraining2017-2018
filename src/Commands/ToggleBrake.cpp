#include "ToggleBrake.h"
#include "../Subsystems/Elevator.h"

ToggleBrake::ToggleBrake() {
	Requires(Elevator::getInstance().get());

}

void ToggleBrake::Initialize() {

	Elevator::BrakeValue value
	= Elevator::getInstance()->IsBrakeOn() ? Elevator::kBrakeOff : Elevator::kBrakeOn;
	Elevator::getInstance()->SetBrake(value);

}
