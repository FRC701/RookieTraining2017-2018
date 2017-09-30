#include "Chassis.h"
#include "CANTalon.h"
#include "../RobotMap.h"
#include "../Commands/Tankdrive.h"

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
	SetDefaultCommand(new TankDrive());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
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

void Chassis::SetBrake() {
  rightFrontWheel.ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
  rightRearWheel.ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
  leftFrontWheel.ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
  leftRearWheel.ConfigNeutralMode(CANTalon::kNeutralMode_Brake);
}

void Chassis::SetupDrive() {
  rightFrontWheel.SetControlMode(CANTalon::kVoltage);

  leftFrontWheel.SetInverted(true);
  leftFrontWheel.SetControlMode(CANTalon::kVoltage);
}

void Chassis::SetUpTalon() {
  rightFrontWheel.SetInverted(false);
  rightFrontWheel.SetFeedbackDevice(CANTalon::QuadEncoder);
  rightFrontWheel.SetControlMode(CANTalon::kVoltage);
  rightFrontWheel.ConfigEncoderCodesPerRev(128);
  rightFrontWheel.SetSensorDirection(false);


  leftFrontWheel.SetInverted(true);
  leftFrontWheel.SetFeedbackDevice(CANTalon::QuadEncoder);
  leftFrontWheel.SetControlMode(CANTalon::kVoltage);
  leftFrontWheel.ConfigEncoderCodesPerRev(128);
  leftFrontWheel.SetSensorDirection(false);


  rightRearWheel.SetControlMode(CANTalon::kVoltage);
  rightRearWheel.Set(RobotMap::kRightFrontID);


  leftRearWheel.SetControlMode(CANTalon::kFollower);
  leftRearWheel.Set(RobotMap::kLeftFrontID);
}
