#include "SetHaySqueeze.h"

SetHaySqueeze::SetHaySqueeze(Elevator::HaySqueezeValue value)
: mValue(value) {
	//sssssssstuuuuuffffffffffffff
	//stuff
	Requires(Elevator::getInstance().get());
}

//TODO delete my project jk dont
void SetHaySqueeze::Initialize() {

	Elevator::getInstance()->SetHaySqueeze(mValue);
}
