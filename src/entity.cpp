
#include "entity.h"

Player::Player(sf::Texture* pTexture, sf::Vector2f pPos){
	pSprite.setTexture(*pTexture);
	pSprite.setPosition(pPos);
	sf::Vector2u textureSize = pSprite.getTexture()->getSize();
	pSprite.setOrigin(textureSize.x / 2, textureSize.y / 2);	
}

void Player::Draw(sf::RenderWindow &window){
	window.draw(pSprite);
}

void Player::Move(char direction){
	switch(direction){
		case 'L':
			if(pSprite.getPosition().x >= 50){	
				pSprite.move(-0.5,0);
				break;
			}
		
		case 'R':
			if(pSprite.getPosition().x <=800-50){
				pSprite.move(0.5,0);
				break;
			}
	}
}

void Player::getHealth(){
	return health;
}

void setState(bool state){
	alive = state;
}
/*
void Player::getPlayerX(){
	return m_playerPos.x;
}
*/


Enemy::Enemy(sf::Texture* eTexture, sf::Vector2f ePos){
	eSprite.setTexture(*eTexture);
	eSprite.setPosition(ePos);
	sf::Vector2u textureSize = eSprite.getTexture()->getSize();
	eSprite.setOrigin(textureSize.x / 2, textureSize.y / 2);	
}

void Enemy::Draw(sf::RenderWindow &window){
	window.draw(eSprite);
}

