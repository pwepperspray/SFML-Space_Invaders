#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

class PlayerEntity{
private:
	int health = 3;
	bool alive = true;
//	sf::Texture playerTexture;
//	sf::Texture playerProjectileTexture;
	sf::Sprite playerSprite;
	sf::Sprite playerProjectileSprite;
	sf::Vector2f m_playerPos;
	sf::Vector2f m_playerScale;
public:
	PlayerEntity(sf::Texture* playerTexture, sf::Vector2f m_playerPos,sf::Vector2f m_playerScale);
	void playerDraw(sf::RenderWindow &window);
};

class EnemyEntity{
private:
	int health;
	int level;
	bool alive = true;
	sf::Sprite enemySprite;
	sf::Sprite enemyProjectileSprite;
	sf::Vector2f m_enemyPos;
	sf::Vector2f m_enemyScale;
public:
	EnemyEntity(sf::Texture* enemyTexture,int level, sf::Vector2f m_enemyPos, sf::Vector2f m_enemyScale);
	void enemyDraw(sf::RenderWindow &window);
};

