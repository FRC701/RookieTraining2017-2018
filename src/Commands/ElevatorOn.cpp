#include "ElevatorOn.h"
#include "../OI.h"
#include "../Subsystems/Elevator.h"

ElevatorOn::ElevatorOn(double speed)
: mSpeed(speed) {


	Requires(Elevator::getInstance().get());
}


void ElevatorOn::Initialize() {

}


void ElevatorOn::Execute() {

	static std::shared_ptr<OI> oi = OI::getInstance();
	static std::shared_ptr<Elevator> elevator = Elevator::getInstance();

	elevator->SetSpool(mSpeed);

	if(oi->getDriverRightTrigger() >= 0.25){
			elevator->SetSpool(oi->getDriverRightTrigger());
	}

	else if(oi->getDriverLeftTrigger() >= 0.25){
		elevator->SetSpool( -oi->getDriverLeftTrigger());
	}

	else{
		elevator->SetSpool(mSpeed);
	}

}


bool ElevatorOn::IsFinished() {
	return false;
}


void ElevatorOn::End() {

}

//
//
void ElevatorOn::Interrupted() {

}
