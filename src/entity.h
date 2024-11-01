#pragma once
#include <SFML/Graphics.hpp>

class Player{
private:
	int health = 3;
	bool alive = true;
	sf::Sprite pSprite;
public:
	Player(sf::Texture* pTexture, sf::Vector2f pPos);
	void Draw(sf::RenderWindow &window);
	void Move(char direction);
public:
	void getHealth();
	void setState();
};

class Enemy{
private:
	bool hit = false;
	sf::Sprite eSprite;
public:
	Enemy(sf::Texture* eTexture, sf::Vector2f ePos);
	void Draw(sf::RenderWindow &window);
	void Move(char direction);
};

class projectile{
	private:
		sf::Vector2f m_projectilePos;
	public:
		projectile(sf::Vector2f m_projectilePos);
};
