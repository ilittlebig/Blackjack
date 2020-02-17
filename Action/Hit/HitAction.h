#ifndef HITACTION_H_INCLUDED
#define HITACTION_H_INCLUDED

#include "../Action.h"
#include "../../Player/Player.h"

class HitAction : public Action {
public:
	HitAction(Player* performer, Hand hand, Deck deck);
	void Execute();
private:
	Deck deck;
};

#endif // !HITACTION_H_INCLUDED
