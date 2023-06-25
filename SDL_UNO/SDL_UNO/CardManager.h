#pragma once
#include "CardDeck.h"

class CardManager
{
	CardDeck* m_cardDeck;
public:
	CardManager();
	void initCardDeck();
};

