#include <iostream>
#include "CasinoDealer.h"
#include "../Hand/HandValueCalculator.h"
#include "../Action/Stand/StandAction.h"
#include "../Action/Hit/HitAction.h"

/*
int GetInput() {
	int totalValue = GetTotalHand();
	if (totalValue < 17) {
		return 2;
	} else if (totalValue >= 17) {
		return 1;
	}
	return 0;
}

std::unique_ptr<Action> CasinoDealer::GetAction(int input) {
	std::unique_ptr<Action> action = nullptr;
	switch (input) {
	case 1:
		action = std::make_unique<StandAction>(this, Hand());
		break;
	case 2:
		action = std::make_unique<HitAction>(this, Hand());
		break;
	default:
		break;
	}
	return action;
}

std::unique_ptr<Action> CasinoDealer::DecideNextMove() {
	int input = GetInput();
	std::unique_ptr<Action> action = GetAction(input);
	return action;
}
*/