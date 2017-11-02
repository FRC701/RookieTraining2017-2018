#include "ElevatorOn.h"
#include "../Subsystems/Elevator.h"
#include "../OI.h"

ElevatorOn::ElevatorOn(double speed)
: mSpeed(speed) {
		// Use Requires() here to declare subsystem dependencies
		// eg. Requires(Robot::chassis.get());
		Requires(Elevator::getInstance().get());
}

// Called just before this Command runs the first time
void ElevatorOn::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void ElevatorOn::Execute() {

		static std::shared_ptr<OI> oi = OI::getInstance();
		static std::shared_ptr<Elevator> elevator = Elevator::getInstance();

		elevator->SetSpool(mSpeed);

		if(oi->getDriverRightTrigger() >= 0.25){
				elevator->SetSpool(oi->getDriverRightTrigger());
		}

		else if(oi->getDriverLeftTrigger() >= 0.25) {
				elevator->SetSpool( -oi->getDriverLeftTrigger());
		}

		else{
				elevator->SetSpool(mSpeed);
		}

}

// Make this return when this Command no longer needs to run execute()
bool ElevatorOn::IsFinished() {
		return false;
}

// Called once after isFinished returns true
void ElevatorOn::End() {

}

// Called when another Command which requires one or more of the same
// subsystems is scheduled to run
void ElevatorOn::Interrupted() {

}


