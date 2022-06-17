#include "RobotContainer.h"

RobotContainer::RobotContainer()
{

  ConfigureButtonBindings();

  // m_Drivetrain.SetDefaultCommand(Drive(
  //     [=]
  //     { return -m_DriverRightJoystick.GetY(); },
  //     [=]
  //     { return m_DriverRightJoystick.GetZ(); },
  //     &m_Drivetrain));
}

void RobotContainer::ConfigureButtonBindings()
{
  frc2::CommandScheduler::GetInstance().ClearButtons();
}
