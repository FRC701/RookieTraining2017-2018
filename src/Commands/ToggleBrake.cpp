#include "ToggleBrake.h"
#include "../Subsystems/Elevator.h"

ToggleBrake::ToggleBrake() {
	//stof
	//TODO THIS MUST BE DELETED IMMEDIATELY
	Requires(Elevator::getInstance().get());
}

//"Called once when the command executes"
void ToggleBrake::Initialize() {

	Elevator::BrakeValue value
					= Elevator::getInstance()->IsBrakeOn() ? Elevator::kBrakeOff : Elevator::kBrakeOn;
	Elevator::getInstance()->SetBrake(value);
}
