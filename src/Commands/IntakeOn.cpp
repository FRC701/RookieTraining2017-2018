#include "IntakeOn.h"
#include "../Subsystems/Intake.h"

IntakeOn::IntakeOn(double speed)
:mSpeed(speed)
{
	Requires(Intake::getInstance().get());
}

void IntakeOn::Initialize() {

}

void IntakeOn::Execute() {
	Intake::getInstance()->SetIntake(mSpeed);
}

bool IntakeOn::IsFinished() {
	return false;
}

void IntakeOn::End() {

}

void IntakeOn::Interrupted() {

}
