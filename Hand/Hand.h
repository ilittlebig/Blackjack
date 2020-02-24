#ifndef HAND_H_INCLUDED
#define HAND_H_INCLUDED

#include <vector>
#include "../Card/Card.h"

class Hand {
public:
	void AddCard(Card card);
	std::vector<Card> GetCards();
private:
	std::vector<Card> cards;
};

#endif // !HAND_H_INCLUDED

