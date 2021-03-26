// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <string>

#include <frc/TimedRobot.h>
#include <frc/smartdashboard/SendableChooser.h>
#include <frc/DigitalInput.h>
#include <frc/DigitalOutput.h>
#include <frc/XboxController.h>
#include <frc/Spark.h>
#include <frc/drive/DifferentialDrive.h>

class Robot : public frc::TimedRobot {
 public:
  void RobotInit() override;
  void RobotPeriodic() override;
  void AutonomousInit() override;
  void AutonomousPeriodic() override;
  void TeleopInit() override;
  void TeleopPeriodic() override;
  void DisabledInit() override;
  void DisabledPeriodic() override;
  void TestInit() override;
  void TestPeriodic() override;

 private:
  frc::SendableChooser<std::string> m_chooser;
  const std::string kAutoNameDefault = "Default";
  const std::string kAutoNameCustom = "My Auto";
  std::string m_autoSelected;
  frc::DigitalInput m_buttonA{0};
  frc::DigitalOutput m_yellowLed{3};
  frc::XboxController m_xBoxController{0};
  frc::Spark m_leftMotor{0};
  frc::Spark m_rightMotor{1};
  frc::DifferentialDrive m_robotDrive{m_leftMotor,m_rightMotor};
};
