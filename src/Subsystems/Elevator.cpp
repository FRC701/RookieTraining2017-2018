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

Elevator::Elevator() : Subsystem(kSubsystemName),
		leftSpool(RobotMap::kLeftSpoolID),
		rightSpool(RobotMap::kRightSpoolID),
		haySqueeze(RobotMap::kHaySqueezeF, RobotMap::kHaySqueezeR),
		brake(RobotMap::kBrakeF,RobotMap::kBrakeR)
{

}


void Elevator::InitDefaultCommand() {

}

void Elevator::SetSpool(double speed){
	leftSpool.Set(speed);
	rightSpool.Set(speed);

}

void Elevator::SetBrake(BrakeValue value){
	brake.Set(static_cast<DoubleSolenoid::Value>(value));

}

bool Elevator::IsBrakeOn() const{
	return brake.Get() == static_cast<DoubleSolenoid::Value>(kOpen);
}

bool Elevator::IsHaySqueezeOpen() const {
	return haySqueeze.Get() == static_cast<DoubleSolenoid::Value>(kBrakeOn);
}

void Elevator::SetHaySqueeze(HaySqueezeValue value){
	haySqueeze.Set(static_cast<DoubleSolenoid::Value>(value));
}




