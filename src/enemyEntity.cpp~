
#include "entity.h"

EnemyEntity::EnemyEntity(sf::Texture* enemyTexture,int level, sf::Vector2f m_enemyPos, sf::Vector2f m_enemyScale){
	enemySprite.setTexture(*enemyTexture);
	enemySprite.setPosition(m_enemyPos);
	enemySprite.scale(m_enemyScale);
	sf::Vector2u textureSize = enemySprite.getTexture()->getSize();
	enemySprite.setOrigin(textureSize.x / 2, textureSize.y / 2);	
}

void EnemyEntity::enemyDraw(sf::RenderWindow &window){
	window.draw(enemySprite);
}
