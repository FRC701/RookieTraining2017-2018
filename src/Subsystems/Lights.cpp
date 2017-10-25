#include "Lights.h"
#include "../RobotMap.h"
#include "../Commands/SetLights.h"

const char Lights::kSubsystemName[] = "Lights";

std::shared_ptr<Lights> Lights::self;

std::shared_ptr<Lights> Lights::getInstance() {
	if (! self) {
		self = std::shared_ptr<Lights>(new Lights);

	}
	return self;
}

Lights::Lights() : Subsystem(kSubsystemName),
mainGlow(RobotMap::kHeimdallGlowID),
leftGlow(RobotMap::kLeftLightID),
rightGlow(RobotMap::kRightLightID)
				{
			SetGlow(LightState::kLightOn);
}

void Lights::InitDefaultCommand() {
	SetDefaultCommand(new SetLights(LightState::kLightOn));
}

void Lights::SetGlow(LightState value){
	mainGlow.Set(static_cast<Relay::Value>(value));
	leftGlow.Set(static_cast<Relay::Value>(value));
	rightGlow.Set(static_cast<Relay::Value>(value));
}
