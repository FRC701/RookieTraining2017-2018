#include "Lights.h"
#include "../RobotMap.h"

const char Lights::kSubsytemName[] = "Lights";

std::shared_ptr<Lights> Lights::self;

std::shared_ptr<Lights> Lights::getInstance() {
  if (! self) {
     self = std::shared_ptr<Lights>(new Lights);
  }
  return self;
}

Lights::Lights() : Subsytem(kSubsystemName) {

}

void Lights::InitDefaultCommand() {
       // Set the default command for a subsystem here.
       // SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsytem
// here. Call these from Commands.
