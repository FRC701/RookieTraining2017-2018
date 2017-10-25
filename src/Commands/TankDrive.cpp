#include "TankDrive.h"
#include "../Subsystems/Chassis.h"
#include "../OI.h"

TankDrive::TankDrive() {
	Requires(Chassis::getInstance().get());

}

void TankDrive::Initialize() {

}

void TankDrive::Execute() {
	std::shared_ptr<Chassis> chassis = Chassis::getInstance();
	std::shared_ptr<OI> oi = OI::getInstance();

		chassis->SetTankDrive(oi->kLeftYAxis_ID, oi->kRightYAxis_ID);

}

bool TankDrive::IsFinished() {
	return false;
}

void TankDrive::End() {

}

void TankDrive::Interrupted() {

}

