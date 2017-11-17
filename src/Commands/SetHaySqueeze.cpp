#include "SetHaySqueeze.h"

SetHaySqueeze::SetHaySqueeze(Elevator::HaySqueezeValue value)
: mValue(value) {
	Requires(Elevator::getInstance().get());
}
void SetHaySqueeze::Initialize() {
	Elevator::getInstance()->SetHaySqueeze(mValue);
}
