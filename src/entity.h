#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

class PlayerEntity{
private:
	int health = 3;
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

