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
	return true;
}

void SetLights::End() {

}

void SetLights::Interrupted() {

}





