#ifndef SRC_COMMANDS_ELEVATORON_H_
#define SRC_COMMANDS_ELEVATORON_H_

#include "Commands/Command.h"

class ElevatorOn : public frc::Command {
public:
		ElevatorOn(double speed);
		void Initialize();
		void Execute();
		bool IsFinished();
		void End();
		void Interrupted();

private:
		double mSpeed;
};

#endif /* SRC_COMMANDS_ELEVATORON_H_ */
