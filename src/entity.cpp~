#include "entity.h"

Player::Player(sf::Texture* Texture, sf::Vector2f Pos){
	Sprite.setTexture(*Texture);
	Sprite.setPosition(Pos);
	sf::Vector2u textureSize = Sprite.getTexture()->getSize();
	Sprite.setOrigin(textureSize.x/2, textureSize.y/2);
}
void Player::draw(sf::RenderWindow* window){
	window.draw(Sprite);
}

void Player::move(char direction){
	switch(direction){
		case 'L':
			if(Spirte.getPosition().x >= 50){
				Sprite.move(-0.5,0);
				break;
			}	
		case 'R':
			if(Spirte.getPosition().x >= 50){
				Sprite.move(0.5,0);
				break;
			}
	}
}

int Player::getHealth(){
	return health;
}

bool Player::isAlive(){
	return alive;
}

void Player::setHealth(int n){
	health = n;
}

void setIsAlive(bool state){
	alive = state;
}

/**********************************************************************/

Enemy::Enemy(sf::Texture* Texture, sf::Vector2f Pos){
	Sprite.setTexture(*Texture);
	Sprite.setPosition(Pos);
	sf::Vector2u textureSize = Sprite.getTexture()->getSize();
	Sprite.setOrigin(textureSize.x/2, textureSize.y/2);
}

void Enemy::draw(sf::RenderWindow* window){
	window.draw(Sprite);
}

bool Player::isAlive(){
	return alive;
}

void setIsAlive(bool state){
	alive = state;
}


