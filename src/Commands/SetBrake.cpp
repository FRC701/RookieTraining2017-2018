#include "SetBrake.h"

SetBrake::SetBrake(Elevator::BrakeValue value)
:mValue(value) {
	Requires(Elevator::getInstance().get());

}

void SetBrake::Initialize() {

	Elevator::getInstance()->SetBrake(mValue);
}
