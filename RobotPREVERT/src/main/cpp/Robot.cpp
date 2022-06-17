// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "Robot.h"

#include <fmt/core.h>

#include <frc/smartdashboard/SmartDashboard.h>
#include <iostream>

void Robot::RobotInit() {}

void Robot::RobotPeriodic() {}

void Robot::TeleopInit() {}

void Robot::TeleopPeriodic()
{
  std::cout << "TeleopPeriodic" << std::endl;
}

#ifndef RUNNING_FRC_TESTS
int main()
{
  return frc::StartRobot<Robot>();
}
#endif
