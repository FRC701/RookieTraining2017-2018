#include "SetBrake.h"

SetBrake::SetBrake(Elevator::BrakeValue value)
: mValue(value) {

	//hello
	Requires(Elevator::getInstance().get());
}

//
void SetBrake::Initialize() {

	Elevator::getInstance()->SetBrake(mValue);

}
