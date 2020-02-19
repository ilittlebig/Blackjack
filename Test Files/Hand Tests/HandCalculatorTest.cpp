#include <iostream>
#include <gtest/gtest.h>
#include "../../Hand/HandValueCalculator.h"
#include "../../Card/Card.h"

void DoesHandHaveAceTest(std::vector<Card>& cards, bool expectedValue) {
	HandValueCalculator handValueCalculator;
	EXPECT_EQ(handValueCalculator.DoesHandHaveAce(cards), expectedValue);
}

void CalculateWithAceTest(std::vector<Card>& cards, int expectedValue) {
	HandValueCalculator handValueCalculator;
	int value = handValueCalculator.GetValueWithAce(cards);
	EXPECT_EQ(value, expectedValue);
}

void AddCard(std::string suit, std::string rank, std::vector<Card>& cards) {
	Card card(suit, rank);
	cards.push_back(card);
}

TEST(DoesHandHaveAceTest, AddCard1) {
	std::vector<Card> cards;

	AddCard("H", "5", cards);
	AddCard("C", "10", cards);
	AddCard("C", "7", cards);

	DoesHandHaveAceTest(cards, false);
	cards.clear();
}

TEST(DoesHandHaveAceTest, AddCard2) {
	std::vector<Card> cards;

	AddCard("S", "A", cards);
	AddCard("H", "A", cards);
	AddCard("D", "A", cards);
	AddCard("C", "A", cards);
	AddCard("H", "7", cards);

	DoesHandHaveAceTest(cards, true);
	CalculateWithAceTest(cards, 21);
	cards.clear();
}

TEST(DoesHandHaveAceTest, AddCard3) {
	std::vector<Card> cards;

	AddCard("D", "2", cards);
	AddCard("D", "6", cards);
	AddCard("H", "K", cards);

	DoesHandHaveAceTest(cards, false);
	cards.clear();
}

TEST(DoesHandHaveAceTest, AddCard4) {
	std::vector<Card> cards;

	AddCard("C", "8", cards);
	AddCard("S", "A", cards);
	AddCard("S", "7", cards);

	DoesHandHaveAceTest(cards, true);
	CalculateWithAceTest(cards, 16);
	cards.clear();
}

TEST(DoesHandHaveAceTest, AddCard5) {
	std::vector<Card> cards;

	AddCard("D", "Q", cards);
	AddCard("S", "10", cards);
	AddCard("H", "Q", cards);

	DoesHandHaveAceTest(cards, false);
	cards.clear();
}

TEST(DoesHandHaveAceTest, AddCard6) {
	std::vector<Card> cards;

	AddCard("C", "A", cards);
	AddCard("S", "K", cards);
	AddCard("D", "A", cards);

	DoesHandHaveAceTest(cards, true);
	CalculateWithAceTest(cards, 22);
	cards.clear();
}