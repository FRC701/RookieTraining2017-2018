#ifndef SetLights_H
#define SetLights_H

#include "Commands/Command.h"
#include"../Subsystems/Lights.h"

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

#endif /* SRC_COMMANDS_SETLIGHTS_H_ */
