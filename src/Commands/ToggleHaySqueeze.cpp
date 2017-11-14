#include "ToggleHaySqueeze.h"
#include "../Subsystems/Elevator.h"

ToggleHaySqueeze::ToggleHaySqueeze() {
	Requires(Elevator::getInstance().get());

}

void ToggleHaySqueeze::Initialize() {

	Elevator::HaySqueezeValue value
	= Elevator::getInstance()->IsHaySqueezeOpen() ? Elevator::kClose : Elevator::kOpen;
	Elevator::getInstance()->SetHaySqueeze(value);
}
