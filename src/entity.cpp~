#include "entity.h"

PlayerEntity::PlayerEntity(sf::Texture* playerTexture, sf::Vector2f m_playerPos, sf::Vector2f m_playerScale){
	playerSprite.setTexture(*playerTexture);
	playerSprite.setPosition(m_playerPos);
	playerSprite.scale(m_playerScale);
	sf::Vector2u textureSize = playerSprite.getTexture()->getSize();
	playerSprite.setOrigin(textureSize.x / 2, textureSize.y / 2);	
}

void PlayerEntity::playerDraw(sf::RenderWindow &window){
	window.draw(playerSprite);
}
