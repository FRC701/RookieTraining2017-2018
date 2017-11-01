#ifndef Lights_H
#define Lights_H

#include <Commands/Subsystem.h>

class Lights : public frc::Subsystem {
private:
        // It's desirable that everything possible under private except
        // for methods that implement subsystem capabilities

  static const char kSubsytemName[];
  static std::shared_ptr<Lights> self;
  Lights();

public:

        static std::shared_ptr<Lights> getInstance();

        void InitDefaultCommand();
};

#endif // Lights_H
