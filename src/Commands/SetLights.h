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
