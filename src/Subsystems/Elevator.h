#ifndef Elevator_H
#define Elevator_H

#include <Commands/Subsystem.h>

class Elevator : public frc::Subsystem {
private:
        // It's most desirable that everything possible under private except
        // for methods that implement subsystem capabilities

        static const char kSubsytemName[];
        static std::shared_ptr<Elevator> self;
        Elevator();

public:

        static std::shared_ptr<Elevator> getInstance();

        void InitDefaultCommand();
};

#endif // Elevator_H
