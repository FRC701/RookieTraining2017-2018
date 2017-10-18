#ifndef SRC_SUBSYSTEMS_ELEVATOR_H_
#define SRC_SUBSYSTEMS_ELEVATOR_H_

#include <Commands/Subsystem.h>

class Elevator : public frc::Subsystem {
private:
	static const char kSubsystemName[];
	static std::shared_ptr<Elevator> self;
	Elevator();

public:

	static std::shared_ptr<Elevator> getInstance();

	void InitDefaultCommand();

};





#endif /* SRC_SUBSYSTEMS_ELEVATOR_H_ */
