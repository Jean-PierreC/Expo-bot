#ifndef Shooter_H
#define Shooter_H

#include "ctrlib/CANTalon.h"
#include <Commands/Subsystem.h>
#include <WPILib.h>

class Shooter : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	CANTalon * talonShooter;
public:
	Shooter();
	~Shooter();
	void InitDefaultCommand();
	void ShootBall(double speed);
	void ShootStop();
};

#endif  // shooter_H
