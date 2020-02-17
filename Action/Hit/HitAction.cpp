#include "HitAction.h"

HitAction::HitAction(Player* performer, Hand hand, Deck deck) : Action(performer, hand) {
	this->deck = deck;
}

void HitAction::Execute() {
	Card newCard = this->deck.GetTopCard();
	this->hand.AddCard(newCard);
}
