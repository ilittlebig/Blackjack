#ifndef CASINODEALER_H_INCLUDED
#define CASINODEALER_H_INCLUDED

#include "../Action/Action.h"
#include "../Action/Hit/HitAction.h"
#include "../Action/Stand/StandAction.h"

class CasinoDealer {
public:
	void DecideNextMove();
private:
	void Execute(Action<CasinoDealer>* action);
	int GetInput();

	Hand hand;
};

#endif // !CASINODEALER_H_INCLUDED
