#ifndef GAMBLER_H_INCLUDED
#define GAMBLER_H_INCLUDED

#include "../Player/Player.h"
#include "../Action/Action.h"

class Gambler : public Player {
public:
	std::unique_ptr<Action> DecideNextMove();
	std::unique_ptr<Action> GetAction(int input);
};

#endif // !GAMBLER_H_INCLUDED
