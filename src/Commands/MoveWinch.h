#ifndef MoveWinch_H
#define MoveWinch_H
#include "OI.h"
#include "../CommandBase.h"

class MoveWinch : public CommandBase {
public:
	MoveWinch();
	~MoveWinch();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // MoveWinch_H
