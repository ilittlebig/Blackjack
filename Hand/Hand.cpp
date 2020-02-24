#include "Hand.h"

void Hand::AddCard(Card card) {
	this->cards.push_back(card);
}

std::vector<Card> Hand::GetCards() {
	return this->cards;
}