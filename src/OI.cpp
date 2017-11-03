// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/ElevatorOn.h"
#include "Commands/IntakeOn.h"
#include "Commands/SetActuator.h"
#include "Commands/SetBrake.h"
#include "Commands/SetHaySqueeze.h"
#include "Commands/ToggleActuator.h"
#include "Commands/ToggleBrake.h"
#include "Commands/ToggleHaySqueeze.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"

std::shared_ptr<OI> OI::self;

std::shared_ptr<OI> OI::getInstance() {
	if (! self) {
	  self = std::make_shared<OI>();
   }
   return self;
}

OI::OI()
: driver(new Joystick(0))
, dA(driver.get(), kButtonA_ID)
, dB(driver.get(), kButtonB_ID)
, dX(driver.get(), kButtonX_ID)
, dY(driver.get(), kButtonY_ID)
, dLB(driver.get(), kButtonLB_ID)
, dRB(driver.get(), kButtonRB_ID)
, dL3(driver.get(), kButtonL3_ID)
, dR3(driver.get(), kButtonR3_ID)
, dStart(driver.get(), kButtonStart_ID)
, dBack(driver.get(), kButtonBack_ID)

, coDriver(new Joystick(1))
, coA(coDriver.get(), kButtonA_ID)
, coB(coDriver.get(), kButtonB_ID)
, coX(coDriver.get(), kButtonX_ID)
, coY(coDriver.get(), kButtonY_ID)
, coLB(coDriver.get(), kButtonLB_ID);
, coRB(coDriver.get(), kButtonRB_ID);
, coL3(coDriver.get(), kButtonL3_ID);
, coR3(coDriver.get(), kButtonR3_ID);
, coStart(coDriver.get(), kButtonStart_ID);
, coBack(coDriver.get(), kButtonBack_ID);

,coTurretNeg90(coDriver.get(), kButtonCoTurretNeg90_ID)
,coTurret0(coDriver.get(), kButtonCoTurret0_ID)
,coTurret90(coDriver.get(), kButtonCoTurret90_ID)
,coTurretMinus(coDriver.get(), kButtonCoTurretMinus_ID)
,coTurretPlus(coDriver.get(), kButtonCoTurretPlus_ID)

,coShooterMinus(coDriver.get(), kButtonCoShooterMinus_ID)
,coShooterPlus(coDriver.get(), kButtonCoShooterPlus_ID)

,coShoot(coDriver.get(), kButtonCoShoot_ID)
,coBallIntake(coDriver.get(), kButtonCoBallIntake_ID)
,coGearScore(coDriver.get(), kButtonCoGearScore_ID)
,coGearPickup(coDriver.get(), kButtonCoGearPickup_ID)
,coGearToggle(coDriver.get(), kButtonCoGearToggle_ID)
,coBallOuttake(coDriver.get(), kButtonCoBallOuttake_ID)
,coFloorOuttake(coDriver.get(), kButtonCoFloorOuttake_ID)
,coCancel(coDriver.get(), kButtonCoCancel_ID)

{
  dStart.WhenPressed(new AutonomousCommand());
  dBack.WhenPressed(new AutonomousCommand());
  dRB.WhenPressed(new ToggleBrake());
  dLB.WhenPressed(new ToggleHaySqueeze());
  dX.WhenPressed(new ToggleActuator());
  dB.WhileHeld(new IntakeOn(1.0));
  dA.WhileHeld(new IntakeOn(-1.0));
}

std::shared_ptr<Joystick> OI::getDriver() {
   return driver;
}

double OI::getDriverLeftXAxis() const {
  return driver->GetRawAxis(kLeftXAxis_ID);
}

double OI::getDriverLeftYAxis() const {
  return driver->GetRawAxis(kLeftYAxis_ID);
}

double OI::getDriverRightXAxis() const {
  return driver->GetRawAxis(kRightXAxis_ID);
}

double OI::getDriverRightYAxis() const {
  return driver->GetRawAxis(kRightYAxis_ID);
}

double OI::getDriverLeftTrigger() const {
  return driver->GetRawAxis(kLeftTrigger_ID);
}

double OI::getDriverRightTrigger() const {
  return driver->GetRawAxis(kRightTrigger_ID);
}


std::shared_ptr<Joystick> OI::getCoDriver() {
   return coDriver;
}

double OI::getCoDriverLeftXAxis() const {
  return coDriver->GetRawAxis(kLeftXAxis_ID);
}

double OI::getCoDriverLeftYAxis() const {
  return coDriver->GetRawAxis(kLeftYAxis_ID);
}

double OI::getCoDriverRightXAxis() const {
  return coDriver->GetRawAxis(kRightXAxis_ID);
}

double OI::getCoDriverRightYAxis() const {
  return coDriver->GetRawAxis(kRightYAxis_ID);
}

double OI::getCoDriverLeftTrigger() const {
  return coDriver->GetRawAxis(kLeftTrigger_ID);
}

double OI::getCoDriverRightTrigger() const {
  return coDriver->GetRawAxis(kRightTrigger_ID);
}

void OI::SetRumble(double amount) {
  driver->SetRumble(GenericHID::kLeftRumble, amount);
  coDriver->SetRumble(GenericHID::kLeftRumble, amount);
}

