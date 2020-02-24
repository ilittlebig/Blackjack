#ifndef DOUBLEACTION_H_INCLUDED
#define DOUBLEACTION_H_INCLUDED

#include "../Action.h"
#include "../../Gambler/Gambler.h"

template<typename T>
class DoubleAction : public Action<T> {
public:
	DoubleAction(T* performer, Hand hand, Deck deck);
	void Execute();
private:
	Deck deck;
};

template<typename T>
DoubleAction<T>::DoubleAction(T* performer, Hand hand, Deck deck) : Action<T>(performer, hand) {
	this->deck = deck;
}

template<typename T>
void DoubleAction<T>::Execute() {
	Card newCard = this->deck.GetTopCard();
	this->hand.AddCard(newCard);
	this->performer->SetBet(this->performer->GetBet()*2);
}

#endif // !DOUBLEACTION_H_INCLUDED