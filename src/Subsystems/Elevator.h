#ifndef Elevator_H
#define Elevator_H

#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <DoubleSolenoid.h>

class Elevator : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

	CANTalon leftSpool;
	CANTalon rightSpool;
	DoubleSolenoid haySqueeze;
	DoubleSolenoid brake;

	static const char kSubsystemName[];
	static std::shared_ptr<Elevator> self;
	Elevator();

public:

	enum BrakeValue {kBrakeOn = DoubleSolenoid::kForward, kBrakeOff = DoubleSolenoid::kReverse };
	enum HaySqueezeValue {kOpen = DoubleSolenoid::kForward, kClose = DoubleSolenoid::kReverse };

	static std::shared_ptr<Elevator> getInstance();

	void InitDefaultCommand();

	void SetBrake(BrakeValue value);
	bool IsBrakeOn() const;

	bool IsHaySqueezepen() const;
	void SetHaySqueeze(HaySqueezeValue value);

	void SetSpool(double speed);

};

#endif  // Elevator_H
