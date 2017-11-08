#include "IntakeOn.h"
#include "../Subsystems/Intake.h"

IntakeOn::IntakeOn(double speed)
: mSpeed(speed)
{
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());

Requires(Intake::getInstance().get());
}
// Called just before this Command runs the first time
void IntakeOn::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void IntakeOn::Execute() {
Intake::getInstance()->SetIntake(mSpeed);
}

// Make this return true when this Command no longer needs to run execute()
bool IntakeOn::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void IntakeOn::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IntakeOn::Interrupted() {

}
