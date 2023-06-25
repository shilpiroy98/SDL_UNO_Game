#pragma once
#include "Color.h"
#include "SpriteData.h"
#include <iostream>
class Card
{
	int m_cardId;
	int m_cardOwnerId;
	Color m_color;
	int m_value;
	SDL_Rect* m_spriteRect;

public:
	Card(Color color, int value, SDL_Rect* spriteRect) : m_color(color), m_value(value), m_spriteRect(spriteRect) {};
	void show() {
		//SDL_RenderCopy(gRenderer, mTexture, clip, &m_spriteRect);
		//std::cout << m_color << " " << m_value << " " << m_spriteRect->x << " " << m_spriteRect->y << "\n";
	}
};
