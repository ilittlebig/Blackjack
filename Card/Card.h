#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <string>
#include <vector>

class Card {
public:
	Card(std::string type, std::string value);
	std::string ToString();
	std::string GetRank();
	Card static GetCard(std::vector<Card> cards, int index);
	int GetValue();
private:
	std::string cardSuit;
	std::string cardValue;
};

#endif // CARD_H_INCLUDED