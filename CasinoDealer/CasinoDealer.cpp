#include "CasinoDealer.h"
#include "../Hand/HandValueCalculator.h"

void CasinoDealer::Execute(Action<CasinoDealer>* action) {
	action->Execute();
	delete action;
}

int CasinoDealer::GetInput() {
	int totalValue = GetTotalHand();
	if (totalValue < 17) {
		return 2;
	} else if (totalValue >= 17) {
		return 1;
	}
	return 0;
}

void CasinoDealer::DecideNextMove() {
	int input = GetInput();
	switch (input) {
	case 1:
		Execute(new HitAction<CasinoDealer>(this, this->hand, Deck()));
		break;
	case 2:
		Execute(new StandAction<CasinoDealer>(this, this->hand, Deck()));
		break;
	default:
		break;
	}
}