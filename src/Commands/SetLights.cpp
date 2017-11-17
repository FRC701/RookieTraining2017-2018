#include "SetLights.h"

SetLights::SetLights(Lights::LightState value) :
mValue(value) {
	// Use Requires() here to declare subsystem dependencies
	Requires(Lights::getInstance().get());
}
void SetLights::Initialize() {
}
void SetLights::Execute() {
Lights::getInstance()->SetGlow(mValue);
}
bool SetLights::IsFinished() {
	return false;
}
void SetLights::End() {
}
void SetLights::Interrupted() {
}
