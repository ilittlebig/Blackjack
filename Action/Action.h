#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED

#include "../Hand/Hand.h"
#include "../Card/Deck.h"

class Player;

class Action {
public:
	Action(Player* performer, Hand hand);
	virtual void Execute() = 0;
protected:
	Player* performer;
	Hand hand;
};

#endif // !ACTION_H_INCLUDED
