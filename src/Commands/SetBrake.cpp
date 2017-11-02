#include "SetBrake.h"

SetBrake::SetBrake(Elevator::BrakeValue value)
: mValue(value) {
		// Use Requires() here to declare subsystem dependencies
		// eg. Requires(Robot::chassis.get());
		Requires(Elevator::getInstance().get());
}

// Called once when the command executes
void SetBrake::Initialize() {

		Elevator::getInstance()->SetBrake(mValue);

}
