#ifndef SetBrake_H
#define SetBrake_H
#include "Commands/InstantCommand.h"
#include "../Subsystems/Elevator.h"

class SetBrake : public InstantCommand {
public:
	SetBrake(Elevator::BrakeValue value);
	void Initialize();
private:
	enum Elevator::BrakeValue mValue;
};
#endif  // SetBrake_H
