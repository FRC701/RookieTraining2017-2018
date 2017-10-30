#ifndef IntakeOn_H
#define IntakeOn_H

#include "Commands/Command.h"

class IntakeOn : public frc::Command {
public:
		IntakeOn(double speed);
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();

private:
		double mSpeed;

};

#endif
