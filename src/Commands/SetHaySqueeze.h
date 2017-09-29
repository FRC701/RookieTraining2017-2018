#ifndef SetHaySqueeze_H
#define SetHaySqueeze_H

#include "Commands/InstantCommand.h"
#include "../Subsystems/Elevator.h"

class SetHaySqueeze : public InstantCommand {
public:
	SetHaySqueeze(Elevator::HaySqueezeValue value);
	void Initialize();

private:
	enum Elevator::HaySqueezeValue mValue;

};

#endif  // SetHaySqueeze_H
