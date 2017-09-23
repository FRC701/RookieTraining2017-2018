#include "Intake.h"
#include "../RobotMap.h"

const char Intake::kSubsystemName[] = "Intake";

std::shared_ptr<Intake> Intake::self;

std::shared_ptr<Intake> Intake::getInstance() {
  if (! self) {
     self = std::shared_ptr<Intake>(new Intake);
  }
  return self;
}

Intake::Intake() : Subsystem(kSubsystemName) {

}

void Intake::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
