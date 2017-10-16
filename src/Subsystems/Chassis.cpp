#include "Chassis.h"
#include "../RobotMap.h"

const char Chassis::kSubsystemName[] = "Chassis";

std::shared_ptr<Chassis> Chassis::self;

std::shared_ptr<Chassis> Chassis::getInstance() {
	if (! self) {
	self = std::shared_ptr<Chassis>(new Chassis);
	}
	return self;
}

Chassis::Chassis() : Subsystem("kSubsistemName") {

}

void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
