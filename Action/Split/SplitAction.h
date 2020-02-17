#ifndef SPLITACTION_H_INCLUDED
#define SPLITACTION_H_INCLUDED

#include "../../Player/Player.h"
#include "../Action.h"

class SplitAction : public Action {
public:
	SplitAction(Player* performer, Hand hand, Deck deck);
	void Execute();
private:
	Deck deck;
};

#endif // !SPLITACTION_H_INCLUDED
