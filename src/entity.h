#pragma once
#include <SFML/Graphics.hpp>

class Player{
private:
	int health = 3;
	bool alive i= true;
	sf::Sprite playerSprite;
	sf::Vector2f m_playerPos;
public:
	Player(sf::Texture* playerTexture, sf::Vector2f m_playerPos,sf::Vector2f m_playerScale);
	void playerDraw(sf::RenderWindow &window);
	void playerMove(char direction);
};

class Enemy{
private:
	int level;
	bool hit = false;
	sf::Sprite enemySprite;
	sf::Vector2f m_enemyPos;
public:
	EnemyEntity(sf::Texture* enemyTexture,int level, sf::Vector2f m_enemyPos, sf::Vector2f m_enemyScale);
	void enemyDraw(sf::RenderWindow &window);
	void enemyMove(char direction);
};

class projectile{
	private:
		sf::Sprite projectileSprite;
		sf::Vector2f m_projectilePos;
	public:
		projectile(sf::Texture* projectileTexture, sf::Vector2f m_projectilePos);
}

