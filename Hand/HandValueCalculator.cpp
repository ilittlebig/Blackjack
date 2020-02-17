#include "../Hand/HandValueCalculator.h"

void ChangeAceValue(int& totalValue, int aces);
void IncreaseTotalValueIfNoAce(int cardValue, int& totalValue, int& aces);

int HandValueCalculator::CalculateHand(std::vector<Card> cards) {
	HandValueCalculator valueCalculator;
	if (valueCalculator.DoesHandHaveAce(cards)) {
		return valueCalculator.GetValueWithAce(cards);
	}
	return valueCalculator.GetValueWithoutAce(cards);
}

int HandValueCalculator::GetCardValue(std::vector<Card> cards, int index) {
	Card card = Card::GetCard(cards, index);
	return card.GetValue();
}

bool HandValueCalculator::DoesHandHaveAce(std::vector<Card>& cards) {
	for (int index = 0; index < cards.size(); index++) {
		int cardValue = GetCardValue(cards, index);
		if (cardValue == 11) {
			return true;
		}
	}
	return false;
}

int HandValueCalculator::GetValueWithoutAce(std::vector<Card>& cards) {
	this->totalValue = 0;
	for (int index = 0; index < cards.size(); index++) {
		int cardValue = GetCardValue(cards, index);
		this->totalValue += cardValue;
	}
	return this->totalValue;
}

int HandValueCalculator::GetValueWithAce(std::vector<Card>& cards) {
	for (int index = 0; index < cards.size(); index++) {
		int cardValue = GetCardValue(cards, index);
		IncreaseTotalValueIfNoAce(cardValue, this->totalValue, this->aces);
	}
	ChangeAceValue(this->totalValue, this->aces);
	return this->totalValue;
}

void IncreaseTotalValueIfNoAce(int cardValue, int& totalValue, int& aces) {
	if (cardValue < 11) {
		totalValue += cardValue;
	}
	else {
		aces++;
	}
}

void ChangeAceValue(int& totalValue, int aces) {
	for (int index = 0; index < aces; index++) {
		if (totalValue + 11 > 21) {
			totalValue += 1;
		}
		else {
			totalValue += 11;
		}
	}
}