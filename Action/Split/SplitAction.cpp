#include "SplitAction.h"

SplitAction::SplitAction(Player* performer, Hand hand, Deck deck) : Action(performer, hand) {
	this->deck = deck;
}

void SplitAction::Execute() {

}
