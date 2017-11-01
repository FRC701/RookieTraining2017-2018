
#ifndef Lights_H
#define Lights_H

#include <Commands/Subsystem.h>
#include <Relay.h>

class Lights : public frc::Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

  static const char kSubsystemName[];
  static std::shared_ptr<Lights> self;
  Lights();

  Relay mainGlow;
  Relay leftGlow;
  Relay rightGlow;

public:

  enum LightState{kLightOn = Relay::kOn, kLightOff = Relay::kOff};

  static std::shared_ptr<Lights> getInstance();

	void InitDefaultCommand();

	void SetGlow(LightState value);
};

#endif  // Lights_H
