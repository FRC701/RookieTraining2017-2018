#include "TankDrive.h"

#include "../Subsystems/Chassis.h"
#include "../OI.h"

TankDrive::TankDrive() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(Chassis::getInstance().get());

}

// Called just before this Command runs the first time
void TankDrive::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void TankDrive::Execute() {
std::shared_ptr<Chassis> chassis = Chassis::getInstance();
std::shared_ptr<OI> oi = OI::getInstance();

chassis->SetTankDrive(oi->kLeftYAxis_ID, oi->kRightYAxis_ID);

}

// Make this return true when this Command no longer needs to run execute()
bool TankDrive::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TankDrive::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TankDrive::Interrupted() {

}
