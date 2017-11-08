#ifndef TankDrive_H
#define TankDrive_H

#include "Commands/Command.h"

class TankDrive : public frc::Command {
public:
	TankDrive();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // TankDrive_H
