#include "Chassis.h"
#include "../RobotMap.h"
#include "CANTalon.h"
#include "../Commands/TankDrive.h"

const char Chassis::kSubsystemName[] = "Chassis";

std::shared_ptr<Chassis> Chassis::self;

std::shared_ptr<Chassis> Chassis::getInstance() {
	if (! self) {
	self = std::shared_ptr<Chassis>(new Chassis);
	}
	return self;
}

Chassis::Chassis() : Subsystem(kSubsystemName),
		leftFrontWheel(RobotMap::kLeftFrontID),
		leftRearWheel(RobotMap::kLeftRearID),
		rightFrontWheel(RobotMap::kRightFrontID),
		rightRearWheel(RobotMap::kRightRearID)

{
	SetUpTalon();
	SetupDrive();
	SetBrake();
}

void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(newTankDrive());

}

void Chassis::SetTankDrive(double left, double right) {
	leftFrontWheel.Set(left);
	rightFrontWheel.Set(right);
}

void Chassis::SetCoast() {
	rightFrontWheel.ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	rightRearWheel.ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	leftFrontWheel.ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
	leftRearWheel.ConfigNeutralMode(CANTalon::kNeutralMode_Coast);
}



// Put methods for controlling this subsystem
// here. Call these from Commands.
