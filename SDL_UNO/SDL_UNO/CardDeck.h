#pragma once
#include "Card.h"
#include <vector>
using namespace std;

class CardDeck {
	vector<Card*> m_cards;

public:
	CardDeck();
	void initCardDeck();
	void shuffleCards();
	vector<Card*> drawCards(int cardAmount);
	Card* drawCard();

};