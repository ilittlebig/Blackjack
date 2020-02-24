#ifndef STANDACTION_H_INCLUDED
#define STANDACTION_H_INCLUDED

#include "../Action.h"
#include "../../Gambler/Gambler.h"

template<typename T>
class StandAction : public Action<T> {
public:
	StandAction(T* performer, Hand hand, Deck deck);
	void Execute();
private:
	Deck deck;
};

template<typename T>
StandAction<T>::StandAction(T* performer, Hand hand, Deck deck) : Action<T>(performer, hand) {
	this->deck = deck;
}

template<typename T>
void StandAction<T>::Execute() {}

#endif // !STANDACTION_H_INCLUDED