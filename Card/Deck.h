#ifndef DECK_H_INCLUDED
#define DECK_H_INCLUDED

#include "Card.h"
#include <random>
#include <iomanip>

class Deck {
public:
	Card GetTopCard();
private:
	std::string GetRandomSuit();
	std::string GetRandomValue();
};

#endif // !DECK_H_INCLUDED

