#ifndef GAMBLER_H_INCLUDED
#define GAMBLER_H_INCLUDED

#include "../Action/Action.h"

class Gambler {
public:
	std::unique_ptr<Action<Gambler>> DecideNextMove();
	std::unique_ptr<Action<Gambler>> GetAction(int input);
	
	void setBet(const int& amount);
	int getBet() const;
private:
	int bet = 0;
};

#endif // !GAMBLER_H_INCLUDED
