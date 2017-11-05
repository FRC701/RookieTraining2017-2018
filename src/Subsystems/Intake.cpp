#include "Intake.h"
#include "../RobotMap.h"
#include "../Commands/IntakeOn.h"

const char Intake::kSubsytemName[] = "Intake";

std::shared_ptr<Intake> Intake::self;

std::shared_ptr<Intake> Intake::getInstance() {
  if (! self) {
    self = std::shared_ptr<Intake>(new Intake);
  }
  return self;
}

Intake::Intake() : Subsystem(kSubsytemName)
				leftSpinner(RobotMap::kLeftSpinnerID),
				rightSpinner(RobotMap::kRightSpinnerID),
				actuator(RobotMap::kActuatorF, RobotMap::kActuatorR)

{
				SetupIntake();
}

void Intake::InitDefaultCommand() {
        // Set the default command for a subsystem here.
        // SetDefaultCommand(new MySpecialCommand());
		        SetDefaultCommand(new IntakeOn(0.0));
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

bool Intake::IsActuatorClosed() const{

		return actuator.Get() == static_cast<DoubleSolenoid::Value>(kActuatorClosed);

}

void Intake::SetActuator(ActuatorValue value){

				actuator.Set(static_cast<DoubleSolenoid::Value>(value));

}

void Intake::SetIntake(double speed){

				leftSpinner.Set(speed);
				rightSpinner.Set(speed);

}

void Intake::SetupIntake() {
				leftSpinner.SetControlMode(CANTalon::kVoltage);
				rightSpinner.SetControlMode(CANTalon::kVOltage)

}

