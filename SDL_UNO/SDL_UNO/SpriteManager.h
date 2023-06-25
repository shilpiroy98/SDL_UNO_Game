#pragma once
#include <SDL.h>
#include <vector>
#include <unordered_map>
#include <string>
#include "LTexture.h"
#include "SpriteData.h"
using namespace std;
/*
	Sprite Manager - class which holds the reference of all the texture sheets initialized
	along with the sprites it has been divided into - it is implemented as a singleton
	since only one sprite manager is required
*/
class SpriteManager
{
	static unordered_map<string, LTexture*> m_textureSheets;
	static unordered_map<string, vector<SpriteData*> > m_spriteClips;
	static SpriteManager* m_spriteManager;
public:
	/* delete default constructors for singleton */
	SpriteManager() = delete;

	/* singleton non-assignable*/
	void operator = (const SpriteManager&) = delete;

	static SpriteManager* GetInstance();

	/* initialize texture sheet and save it with reference to the name*/ 
	static void initializeTextureSheet(const string &textureName, LTexture* texture);

	/* given texture name, width and height of sprites, divide texture sheet into sprites and save in memory*/
	static void createSpritesFromTexture(const string &textureName, int width, int height, int rowSpriteCount, int colSpriteCount);

	/* given texture name, coordinate data for the sprites, divide texture sheet into sprites and save in memory*/
	static void createSpritesFromTexture(const string &textureName, const vector<SpriteData*> &spriteData, int rowSpriteCount, int colSpriteCount);

	/* retrieve all the saved sprites from the texture sheet*/
	static vector<SpriteData*> getAllSpritesFromTextureSheet(const string &textureName);

	/* given texture name & sprite name return the SDL Rect to render on screen*/
	SDL_Rect* getSpriteFromTextureSheet(const string &textureName, const string &spriteName) const;
};

