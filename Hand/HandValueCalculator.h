#ifndef HANDVALUECALCULATOR_H_INCLUDED
#define HANDVALUECALCULATOR_H_INCLUDED

#include "../Card/Card.h"

class HandValueCalculator {
public:
	bool DoesHandHaveAce(std::vector<Card>& cards);
	int CalculateHand(std::vector<Card> cards);
	int GetValueWithoutAce(std::vector<Card>& cards);
	int GetValueWithAce(std::vector<Card>& cards);
	int GetCardValue(std::vector<Card> cards, int index);
private:
	int aces = 0;
	int totalValue = 0;
};

#endif // HANDVALUECALCULATOR_H_INCLUDED