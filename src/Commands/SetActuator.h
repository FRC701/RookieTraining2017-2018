#ifndef SetActuator_H
#define SetActuator_H

#include "Commands/InstantCommand.h"
#include "../Subsystems/Intake.h"

class SetActuator : public frc::InstantCommand {
public:
	SetActuator(Intake::ActuatorValue value);
	void Initialize();

private:
	enum Intake::ActuatorValue mValue;

};



#endif /* SRC_COMMANDS_SETACTUATOR_H_ */
