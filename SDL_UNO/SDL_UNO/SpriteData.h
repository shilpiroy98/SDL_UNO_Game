#pragma once
#include <SDL.h>
#include <string>

struct SpriteData {
	int x;
	int y;
	int width;
	int height;
	int spriteId;
	std::string textureId;
	SDL_Rect* rect;
};
