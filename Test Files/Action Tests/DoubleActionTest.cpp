#include <iostream>
#include <gtest/gtest.h>
#include "../../Gambler/Gambler.h"
#include "../../Hand/Hand.h"
#include "../../Card/Deck.h"
#include "../../Action/Double/DoubleAction.h"

TEST(TestDoubleAction, Test1) {
	Gambler* gambler = new Gambler;
	Hand hand;
	Deck deck;

	DoubleAction<Gambler> doubleAction(gambler, hand, deck);
	
	const int betAmount = 10;
	gambler->SetBet(betAmount);

	ASSERT_EQ(gambler->GetBet(), 10);
	doubleAction.Execute();
	ASSERT_EQ(gambler->GetBet(), 20);

	delete gambler;
}

TEST(TestDoubleAction, Test2) {
	Gambler* gambler = new Gambler;

	const int betAmount = 10;
	gambler->SetBet(betAmount);

	ASSERT_EQ(gambler->GetBet(), 10);
	gambler->DecideNextMove(4);
	ASSERT_EQ(gambler->GetBet(), 20);

	delete gambler;
}