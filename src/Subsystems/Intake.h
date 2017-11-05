#ifndef Intake_H
#define Intake_H
#include <Commands/Subsystem.h>
#include <CANTalon.h>
#include <DoubleSolenoid.h>

class Intake : public frc::Subsystem {
private:
        // It's desirable that everything possible under private except
        // for methods that implement subsystem capabilities

        static const char kSubsytemName[];
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

#endif // Intake_H
