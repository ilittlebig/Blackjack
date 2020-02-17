#include "DoubleAction.h"

DoubleAction::DoubleAction(Player* performer, Hand hand, Deck deck) : Action(performer, hand) {
	this->deck = deck;
}

void DoubleAction::Execute() {

}
