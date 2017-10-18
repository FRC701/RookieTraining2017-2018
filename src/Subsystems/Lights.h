#ifndef Lights_H
#define Lights_H

#include <Commands/Subsystem.h>

class Lights : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities

public:
	Lights();
	void InitDefaultCommand();
};

#endif  // Lights_H
