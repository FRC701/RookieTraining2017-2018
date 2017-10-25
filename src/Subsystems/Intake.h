#ifndef Intake_H
#define Intake_H

#include <Commands/Subsystem.h>

class Intake : public frc::Subsystem {
private:
        // It's desirable that everything possible under private except
        // for methods that implement subsystem capabilities

        static const char kSubsytemName[];
        static std::shared_ptr<Intake> self;
        Intake();

public:

        static std::shared_ptr<Intake> getInstance();

        void InitDefaultCommand();
};

#endif // Intake_H
