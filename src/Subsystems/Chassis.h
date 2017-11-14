#ifndef Chassis_H
#define Chassis_H

#include <Commands/Subsystem.h>
#include "CANTalon.h"

class Chassis : public frc::Subsystem {

private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities.

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
	  void SetupDrive();
	  void SetUpTalon();
};

#endif  // Chassis_H
