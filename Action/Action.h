#ifndef ACTION_H_INCLUDED
#define ACTION_H_INCLUDED

#include <memory>

#include "../Hand/Hand.h"
#include "../Card/Deck.h"

template<typename T>
class Action {
public:
	Action(T* performer, Hand hand);
	virtual void Execute() = 0;
protected:
	T* performer;
	Hand hand;
};

template<typename T>
Action<T>::Action(T* performer, Hand hand) {
	this->performer = performer;
	this->hand = hand;
}

#endif // !ACTION_H_INCLUDED
