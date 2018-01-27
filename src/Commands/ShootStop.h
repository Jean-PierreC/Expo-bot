#ifndef ShootStop_H
#define ShootStop_H

#include "../CommandBase.h"

class ShootStop : public CommandBase {
public:
	ShootStop();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ShootStop_H
