#ifndef Chassis_H
#define Chassis_H

#include <Commands/Subsystem.h>

class Chassis : public Subsystem {
private:
        // It's desirable that everything possible under private except
        // for methods that implement subsystem capabilities

        static const char kSubsystemName[];
        static std::shared_ptr<Chassis> self;
        Chassis();

public:

       static std::shared_ptr<Chassis> getInstance();

       void InitDefaultCommand();
};

#endif  // Chassis_H
