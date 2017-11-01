#ifndef Chassis_H
#define Chassis_H

#include <Commands/Subsystem.h>
#include "CANTalon.h"
#include "WPILIB.h"
class Chassis : public frc::Subsystem {
private:


	static const char kSubsystemName[];
	static std::shared_ptr<Chassis> self;
	Chassis();

	CANTalon leftFrontWheel;
	CANTalon leftRearWheel;
	CANTalon rightFrontWheel;
	CANTalon rightRearWheel;

public:
	static std::shared_ptr<Chassis> getInstance();

	void InitDefaultCommand();

	void SetTankDrive(double left, double right);
	void SetCoast();
	void SetBrake();
	void SetUpDrive();
	void SetUpTalon();
};

#endif  // Chassis_H
