#include <iostream>
#include <gtest/gtest.h>
#include "../../Action/Hit/HitAction.h"
#include "../../Gambler/Gambler.h"
#include "../../CasinoDealer/CasinoDealer.h"
#include "../../Hand/Hand.h"
#include "../../Card/Deck.h"

TEST(TestName, TestHitAction1) {
	Gambler* gambler{};
	CasinoDealer* casinoDealer{};

	Hand hand;
	Deck deck;
	HitAction<Gambler> hitAction(gambler, hand, deck);

	HitAction<CasinoDealer> hitAction(casinoDealer, hand, deck);

	hitAction.Execute();
}