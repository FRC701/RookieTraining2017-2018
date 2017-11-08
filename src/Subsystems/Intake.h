#ifndef Intake_H
#define Intake_H
#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <DoubleSolenoid.h>

class Intake : public frc::Subsystem {
private:

	static const char kSubsystemName[];
	static std::shared_ptr<Intake> self;
	Intake();

	CANTalon leftSpinner;
	CANTalon rightSpinner;
	DoubleSolenoid actuator;

public:
	enum ActuatorValue{kActuatorOpen = DoubleSolenoid::kForward,kActuatorClosed = DoubleSolenoid::kReverse};
	static std::shared_ptr<Intake> getInstance();
	void InitDefaultCommand();
	bool IsActuatorClosed() const;
	void SetActuator(ActuatorValue value);
	void SetIntake(double speed);
	void SetupIntake();

};

#endif /* SRC_SUBSYSTEMS_INTAKE_H_ */
