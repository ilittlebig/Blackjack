#ifndef GAMBLER_H_INCLUDED
#define GAMBLER_H_INCLUDED

#include "../Action/Action.h"
#include "../Action/Hit/HitAction.h"
#include "../Action/Stand/StandAction.h"
#include "../Action/Double/DoubleAction.h"
#include "../Action/Split/SplitAction.h"

class Gambler {
public:
	void DecideNextMove(int input);
	
	void SetBet(const int& amount);
	int GetBet() const;
private:
	void Execute(Action<Gambler>* action);

	int bet = 0;
	Hand hand;
};

#endif // !GAMBLER_H_INCLUDED
