#pragma once
#include <SFML/Graphics.hpp>

class Player{
private:
	unsigned short int lives = 3;
	bool alive = true;
	sf::Sprite Sprite;
public:
	Player(sf::Texture* Texture, sf::Vector2f Pos);
public:
	void draw(sf::RenderWindow &window);
	void move(char direction);
public:
	int getHealth();
	bool isAlive();
	//getPos();
public:
	void setHealth(int n);
	void setIsAlive(bool state);
};

/**********************************************************************/

class Enemy{
private:
	bool alive = true;
	sf::Sprite Sprite;
public:
	Enemy(sf::Texture* Texture, sf::Vector2f Pos);
public:
	void draw(sf::RenderWindow &window);
//	void move(char direction);
public:
	bool isAlive();
	//getPosX();
	//getPosY();
public:
	void setIsAlive(bool state);
};
