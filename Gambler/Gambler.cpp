#include <iostream>
#include "Gambler.h"
#include "../Action/Hit/HitAction.h"

int GetInput() {
	int input;
	std::cin >> input;
	return input;
}

std::unique_ptr<Action<Gambler>> Gambler::GetAction(int input) {
	std::unique_ptr<Action<Gambler>> action;
	/*
	switch (input) {
	case 1:
		action = std::make_unique<StandAction>(this, Hand());
		break;
	case 2:
		action = std::make_unique<StandAction>(this, Hand());
		break;
	case 3:
		action = std::make_unique<SplitAction>(this, Hand());
		break;
	case 4:
		action = std::make_unique<DoubleAction>(this, Hand());
		break;
	default:
		break;
	}
	*/
	return action;
}

std::unique_ptr<Action<Gambler>> Gambler::DecideNextMove() {
	int input = GetInput();
	std::unique_ptr<Action<Gambler>> action = GetAction(input);
	return action;
}

void Gambler::setBet(const int& amount) {
	this->bet = amount;
}

int Gambler::getBet() const {
	return this->bet;
}
