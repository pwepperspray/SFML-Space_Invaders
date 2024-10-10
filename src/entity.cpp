
#include "entity.h"

Player::Player(sf::Texture* playerTexture, sf::Vector2f m_playerPos, sf::Vector2f m_playerScale){
	//this->m_playerPos = m_playerPos;
	playerSprite.setTexture(*playerTexture);
	playerSprite.setPosition(m_playerPos);
	playerSprite.scale(m_playerScale);
	sf::Vector2u textureSize = playerSprite.getTexture()->getSize();
	playerSprite.setOrigin(textureSize.x / 2, textureSize.y / 2);	
}

void Player::playerDraw(sf::RenderWindow &window){
	window.draw(playerSprite);
}

void Player::playerMove(char direction){
	switch(direction){
		case 'L':
			playerSprite.move(-1,0);
			break;
		case 'R':
			playerSprite.move(1,0);
			break;
		default:
			break;
	}
}
/*
void Player::getPlayerX(){
	return m_playerPos.x;
}
*/


Enemy::Enemy(sf::Texture* enemyTexture, int level, sf::Vector2f m_enemyPos, sf::Vector2f m_enemyScale){
	enemySprite.setTexture(*enemyTexture);
	enemySprite.setPosition(m_enemyPos);
	enemySprite.scale(m_enemyScale);
	sf::Vector2u textureSize = enemySprite.getTexture()->getSize();
	enemySprite.setOrigin(textureSize.x / 2, textureSize.y / 2);	
}

void Enemy::enemyDraw(sf::RenderWindow &window){
	window.draw(enemySprite);
}

