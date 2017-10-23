#include "SetLights.h"

SetLights::SetLights(Lights::LightState value) :
		mValue(value) {
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





