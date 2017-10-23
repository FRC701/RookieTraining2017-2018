#include "SetLights.h"

SetLights::SetLights(Lights::LightState value) :
mValue(value) {
	// Use Requires() here to declare subsystem dependencies
	Requires(Lights::getInstance().get());
}

// Called just before this Command runs the first time
void SetLights::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void SetLights::Execute() {
Lights::getInstance()->SetGlow(mValue);
}

// Make this return true when this Command no longer needs to run execute()
bool SetLights::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void SetLights::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void SetLights::Interrupted() {

}
