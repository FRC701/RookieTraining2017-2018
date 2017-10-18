#include "Elevator.h"
#include "../RobotMap.h"

const char Elevator::kSubsystemName[] = "Elevator";

std::shared_ptr<Elevator> Elevator::self;

std::shared_ptr<Elevator> Elevator::getInstance() {
	if (! self) {
		self = std::shared_ptr<Elevator>(new Elevator);
	}
	return self;
}

Elevator::Elevator() : Subsystem(kSubsystemName) {

}

void Elevator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
