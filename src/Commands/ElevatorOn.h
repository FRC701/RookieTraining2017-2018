#ifndef ElevatorOn_H
#define ElevatorOn_H
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
#endif  // ElevatorOn_H
