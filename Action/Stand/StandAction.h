#ifndef STANDACTION_H_INCLUDED
#define STANDACTION_H_INCLUDED

#include "../Action.h"

class StandAction : public Action {
public:
	StandAction(Player* performer, Hand hand);
	void Execute();
};

#endif // !STANDACTION_H_INCLUDED
