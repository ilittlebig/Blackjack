#include "Gambler.h"

void Gambler::Execute(Action<Gambler>* action) {
	action->Execute();
	delete action;
}

void Gambler::DecideNextMove(int input) {
	switch (input) {
	case 1:
		Execute(new HitAction<Gambler>(this, this->hand, Deck()));
		break;
	case 2:
		Execute(new StandAction<Gambler>(this, this->hand, Deck()));
		break;
	case 3:
		Execute(new SplitAction<Gambler>(this, this->hand, Deck()));
		break;
	case 4:
		Execute(new DoubleAction<Gambler>(this, this->hand, Deck()));
		break;
	default:
		Execute(new StandAction<Gambler>(this, this->hand, Deck()));
		break;
	}
}

void Gambler::SetBet(const int& amount) {
	this->bet = amount;
}

int Gambler::GetBet() const {
	return this->bet;
}
