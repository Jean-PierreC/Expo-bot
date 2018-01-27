#ifndef Shoot_H
#define Shoot_H

#include "../CommandBase.h"
class ShootBall : public CommandBase {
public:
	ShootBall();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // Shoot_H
