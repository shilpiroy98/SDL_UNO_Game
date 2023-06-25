#include "CardDeck.h"
#include "JsonData.h"
#include "SpriteManager.h"
#include <iostream>

void CardDeck::initCardDeck()
{
	json cardData = JsonData::GetUNOCardJsonData();
	int width = cardData["width"];
	int height = cardData["height"];
	int rowCount = cardData["rowCount"];
	int colCount = cardData["colCount"];
	SpriteManager::createSpritesFromTexture("card-sheet", width, height, rowCount, colCount);
	vector<SpriteData*> sprites = SpriteManager::getAllSpritesFromTextureSheet("card-sheet");
	string cardNames[] = { "uno-yellow-cards", "uno-red-cards", "uno-green-cards", "uno-blue-cards" };
	Color colors[] = { YELLOW, RED, GREEN, BLUE };
	for (int i = 0; i < 4; i++) {
		for (json::iterator it = cardData["uno-cards"][cardNames[i]].begin(); it != cardData["uno-cards"][cardNames[i]].end(); it++) {
			SpriteData* currentSprite = sprites[(*it)["index"]];
			Card* card = new Card(colors[i], (*it)["number"], currentSprite->rect);
			m_cards.push_back(card);
		}
	}
}

CardDeck::CardDeck()
{
}

void CardDeck::shuffleCards()
{
}

vector<Card*> CardDeck::drawCards(int cardAmount)
{
	return vector<Card*>();
}

Card* CardDeck::drawCard()
{
	return nullptr;
}
