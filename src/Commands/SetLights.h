#ifndef SetLight_H
#define SetLight_H
#include "Commands/Command.h"
#include "../Subsystems/Lights.h"

class SetLights : public frc::Command {
public:
	SetLights(Lights::LightState value);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	Lights::LightState mValue;
};
#endif  // SetLight_H
