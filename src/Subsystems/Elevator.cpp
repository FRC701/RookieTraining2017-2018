#include "Elevator.h"
#include "../RobotMap.h"
#include "../Commands/ElevatorOn.h"

const char Elevator::kSubsytemName[] = "Elevator";

std::shared_ptr<Elevator> Elevator::self;

std::shared_ptr<Elevator> Elevator::getInstance() {
  if (! self) {
    self = std::shared_ptr<Elevator> (new Elevator);
  }
  return self;
}

Elevator::Elevator() : Subsystem(kSubsytemName),
				leftSpool(RobotMap::kLeftSpoolID),
				rightSpool(RobotMap::kRightSpoolID),
				haySqueeze(RobotMap::kHaySqueezeF, RobotMap::kHaySqueezeR),
				brake(RobotMap::kBrakeF, RobotMap::kBrakeR)
{

}

void Elevator::InitDefaultCommand() {
        // Set the default command for a subsystem here.
        // SetDefaultCOmman(new MySpecialCommand());
	    SetDefaultCommand(new ElevatorOn(0.0));
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Elevator::SetSpool(double speed){
		leftSpool.Set(speed);
		rightSpool.Set(speed);
}

void Elevator::SetBrake(BrakeValue value){
		brake.Set(static_cast<DoubleSolenoid::Value>(value));
}

bool Elevator::IsBrakeOn() const {
		return brake.Get() == static_cast<DoubleSolenoid::Value>(kBrakeOn);
}

bool Elevator::IsHaySqueezepen() const {
		return haySqueeze.Get() == static_cast<DoubleSolenoid::Value>(kOpen);
}

void Elevator::SetHaySqueeze(HaySqueezeValue value){
		haySqueeze.Set(static_cast<DoubleSolenoid::Value>(value));
}
