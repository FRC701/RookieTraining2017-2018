#ifndef SetLights_H
#define SetLights_H

#include "Commands/Command.h"
#include "../Subsystems/Lights.h"

class SetLights : public frc::Command {
public:
		SetLights(Lights::LightState value);
		void Initialize();
		void Execxute();
		bool IsFinished();
		void End();
		void Interrupted();

private:
		Lights::LightState mValue;
};

#endif // SetLights_H
