#ifndef DOUBLEACTION_H_INCLUDED
#define DOUBLEACTION_H_INCLUDED

#include "../../Player/Player.h"
#include "../Action.h"

class DoubleAction : public Action {
public:
	DoubleAction(Player* performer, Hand hand, Deck deck);
	void Execute();
private:
	Deck deck;
};

#endif // !DOUBLEACTION_H_INCLUDED
