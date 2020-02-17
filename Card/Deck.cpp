#include "Deck.h"

Card Deck::GetTopCard() {
	Card *card = new Card("H", "2");
	return *card;
}