#include "SetHaySqueeze.h"


SetHaySqueeze::SetHaySqueeze(Elevator::HaySqueezeValue value)
: mValue(value) {
		// Use Requires() here to declare subsystem dependencies
		// eg. Requires(Robot::chassis.get());
		Requires(Elevator::getInstance().get());
}

// Called once when the Command executes
void SetHaySqueeze::Initialize() {

		Elevator::getInstance()->SetHaySqueeze(mValue);

}
