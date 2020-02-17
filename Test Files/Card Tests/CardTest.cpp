#include <iostream>
#include <gtest/gtest.h>
#include "Card/Card.h"

void TestCard(std::string suit, std::string rank, int expectedValue, std::vector<Card>& cards) {
	Card card(suit, rank);
	cards.push_back(card);
	EXPECT_EQ(card.GetValue(), expectedValue);
}

TEST(TestName, TestCards1) {
	std::vector<Card> cards;

	TestCard("D", "7", 7, cards);
	TestCard("S", "K", 10, cards);
	TestCard("S", "2", 2, cards);
}

TEST(TestName, TestCards2) {
	std::vector<Card> cards;

	TestCard("H", "5", 5, cards);
	TestCard("C", "10", 10, cards);
	TestCard("C", "A", 11, cards);
}

TEST(TestName, TestCards3) {
	std::vector<Card> cards;

	TestCard("S", "Q", 10, cards);
	TestCard("C", "A", 11, cards);
	TestCard("D", "A", 11, cards);
}

TEST(TestName, TestCards4) {
	std::vector<Card> cards;

	TestCard("H", "3", 3, cards);
	TestCard("D", "9", 9, cards);
	TestCard("S", "5", 5, cards);
}