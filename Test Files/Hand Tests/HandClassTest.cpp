#include <iostream>
#include <gtest/gtest.h>
#include "../../Hand/Hand.h"
#include "../../Card/Card.h"

TEST(HandClassTest, Test1) {
	Hand hand;
	Card card("H", "5");

	ASSERT_EQ(hand.GetCards().size(), 0);
	hand.AddCard(card);
	ASSERT_EQ(hand.GetCards().size(), 1);
}

TEST(HandClassTest, Test2) {
	Hand hand;
	Card card1("H", "5");
	Card card2("D", "2");
	Card card3("S", "6");

	ASSERT_EQ(hand.GetCards().size(), 0);
	hand.AddCard(card1);
	hand.AddCard(card2);
	hand.AddCard(card3);
	ASSERT_EQ(hand.GetCards().size(), 3);
}

TEST(HandClassTest, Test3) {
	Hand hand;
	Card card1("H", "2");
	Card card2("S", "9");
	Card card3("H", "7");
	Card card4("D", "5");

	ASSERT_EQ(hand.GetCards().size(), 0);
	hand.AddCard(card1);
	hand.AddCard(card2);
	hand.AddCard(card3);
	hand.AddCard(card4);
	ASSERT_EQ(hand.GetCards().size(), 4);
}