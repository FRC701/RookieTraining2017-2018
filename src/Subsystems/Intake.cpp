#include "Intake.h"
#include "../RobotMap.h"

const char Intake::kSubsytemName[] = "Intake";

std::shared_ptr<Intake> intake::self;

std::shared_ptr<Intake> Intake::getInstance() {
  if (! self) {
    self = std::shared_ptr<Intake>(new Intake);
  }
  return self;
}

Intake::Intake() : Subsytem(kSubsytemName) {

}

void Intake::InitDefaultCommand() {
        // Set the default command for a subsystem here.
        // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsytem
// here. Call these from Commands.

