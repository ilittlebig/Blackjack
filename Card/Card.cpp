#include <iostream>
#include "../Card/Card.h"

// Card heartFive("D", "5")
Card::Card(std::string type, std::string value) {
	this->cardSuit = type;
	this->cardValue = value;
}

Card Card::GetCard(std::vector<Card> cards, int index) {
	return cards.at(index);
}

bool is_number(const std::string& s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it)) ++it;
	return !s.empty() && it == s.end();
}

int Card::GetValue() {
	if (is_number(this->cardValue)) {
		return stoi(this->cardValue);
	} else if (this->cardValue == "A") {
		return 11;
	} else {
		return 10;
	}
	return 0;
}

std::string Card::GetRank() {
	return this->cardValue;
}

std::string Card::ToString() {
	std::string newString = "Suit: " + this->cardSuit + "\n" + "Rank: " + this->cardValue;
	return newString;
}