#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

#include <memory>

class Action;

class Player {
public:
	virtual std::unique_ptr<Action> DecideNextMove() = 0;
};

#endif // !PLAYER_H_INCLUDED