#include <iostream>
#include <gtest/gtest.h>
#include "../../Gambler/Gambler.h"
#include "../../CasinoDealer/CasinoDealer.h"
#include "../../Action/Hit/HitAction.h"
#include "../../Action/Double/DoubleAction.h"
#include "../../Hand/Hand.h"
#include "../../Card/Deck.h"

TEST(TestActions, TestDoubleAction) {
	Gambler* gambler = new Gambler;
	Hand hand;
	Deck deck;

	DoubleAction<Gambler> doubleAction(gambler, hand, deck);
	
	const int betAmount = 10;
	gambler->setBet(betAmount);

	ASSERT_EQ(gambler->getBet(), 10);
	doubleAction.Execute();
	ASSERT_EQ(gambler->getBet(), 20);

	delete gambler;
}