#include "Deck.h"

std::string Deck::GetRandomSuit() {
	srand(std::random_device()());
	std::vector<std::string> types = { "C", "S", "H", "D", "K", "Q" };
	return types[rand() % 6];
}

std::string Deck::GetRandomValue() {
	std::mt19937 rng{std::random_device()()};
	std::uniform_int_distribution<int> gen(2, 9);
	return std::to_string(gen(rng));
}

Card Deck::GetTopCard() {
	std::string suit = GetRandomSuit();
	std::string value = GetRandomValue();

	if (suit == "K" || suit == "Q") {
		Card* card = new Card(suit, "10");
		return *card;
	}
	Card* card = new Card(suit, value);
	return *card;
}