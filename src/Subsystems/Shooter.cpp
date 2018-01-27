#include "Shooter.h"
#include "../RobotMap.h"
#include "../Commands/ShootBall.h"

Shooter::Shooter():

		frc::Subsystem("Shooter"),
		talonShooter(new CANTalon(1))
{

}
Shooter::~Shooter()
{
	delete talonShooter;

}
void Shooter::InitDefaultCommand()
{
	SetDefaultCommand(new ShootBall());
}
void Shooter::ShootBall(double ShootSpeed)
{
	talonShooter -> Set(ShootSpeed);

}
void Shooter::ShootStop()
{
	talonShooter -> Set(0);

}

