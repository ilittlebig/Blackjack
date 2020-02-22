#ifndef SPLITACTION_H_INCLUDED
#define SPLITACTION_H_INCLUDED

#include "../Action.h"
#include "../../Gambler/Gambler.h"

template<typename T>
class SplitAction : public Action<T> {
public:
	SplitAction(T* performer, Hand hand, Deck deck);
	void Execute();
private:
	Deck deck;
};

template<typename T>
SplitAction<T>::SplitAction(T* performer, Hand hand, Deck deck) : Action<T>(performer, hand) {
	this->deck = deck;
}

template<typename T>
void SplitAction<T>::Execute() {}

#endif // !SPLITACTION_H_INCLUDED