#ifndef HITACTION_H_INCLUDED
#define HITACTION_H_INCLUDED

#include "../Action.h"
#include "../../Gambler/Gambler.h"

template<typename T>
class HitAction : public Action<T> {
public:
	HitAction(T* performer, Hand hand, Deck deck);
	void Execute();
private:
	Deck deck;
};

template<typename T>
HitAction<T>::HitAction(T* performer, Hand hand, Deck deck) : Action<T>(performer, hand) {
	this->deck = deck;
}

template<typename T>
void HitAction<T>::Execute() {
	Card newCard = this->deck.GetTopCard();
	this->hand.AddCard(newCard);
}

#endif // !HITACTION_H_INCLUDED