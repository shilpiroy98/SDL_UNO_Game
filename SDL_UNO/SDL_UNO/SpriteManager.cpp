#include "SpriteManager.h"

unordered_map<string, LTexture*> SpriteManager::m_textureSheets;
unordered_map<string, vector<SpriteData*> > SpriteManager::m_spriteClips;

SpriteManager* SpriteManager::GetInstance()
{
	return nullptr;
}

void SpriteManager::initializeTextureSheet(const string& textureName, LTexture* texture)
{
}

void SpriteManager::createSpritesFromTexture(const string& textureName, int width, int height, int rowSpriteCount, int colSpriteCount)
{
	vector<SpriteData*> spriteDataList;
	for (int i = 0; i < rowSpriteCount; i++) {
		for (int j = 0; j < colSpriteCount; j++) {
			SpriteData* spriteData = new SpriteData();
			spriteData->x = j * width;
			spriteData->y = i * height;
			spriteData->width = width;
			spriteData->height = height;
			spriteData->spriteId = i * rowSpriteCount + j;
			spriteData->textureId = textureName;
			spriteData->rect = new SDL_Rect{ spriteData->x, spriteData->y, spriteData->width, spriteData->height };
			spriteDataList.push_back(spriteData);
		}
	}
	m_spriteClips[textureName] = spriteDataList;
}

void SpriteManager::createSpritesFromTexture(const string& textureName, const vector<SpriteData*>& spriteData, int rowSpriteCount, int colSpriteCount)
{

}

vector<SpriteData*> SpriteManager::getAllSpritesFromTextureSheet(const string& textureName)
{
	return m_spriteClips[textureName]; 
}

SDL_Rect* SpriteManager::getSpriteFromTextureSheet(const string& textureName, const string& spriteName) const
{
	return nullptr;
}
