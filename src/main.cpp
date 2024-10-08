#include <iostream>
#include <SFML/Graphics.hpp>
#include "entity.h"

int main(){
	const int WIN_WIDTH = 800;
	const int WIN_HEIGHT = 800;
	const sf::Vector2f SCALE(6.0,6.0);
	sf::Vector2f playerStartPosition(WIN_WIDTH / 2, WIN_HEIGHT - 32);
	sf::IntRect playerRect(0,8,8,8);

	sf::RenderWindow mainWindow(sf::VideoMode(WIN_WIDTH,WIN_HEIGHT), "Space Invaders", sf::Style::Close | sf::Style::Titlebar);
	sf::Texture bgTexture;
	if(!bgTexture.loadFromFile(".//data//bg.jpg")){
		std::cerr << "Failed to load bg \n";
	}
	sf::Sprite bgSprite(bgTexture);
	bgSprite.setScale(0.4,0.5);
	sf::Texture playerTexture;
	if(!playerTexture.loadFromFile(".//data//player.png")){
		std::cerr << "Player Texture failed to load \n";
	}
	PlayerEntity player(&playerTexture,playerStartPosition,SCALE);

	/*
	sf::Sprite player;
	player.setTexture(tileset);
	player.setTextureRect(playerRect);
	player.scale(SCALE);
	player.setPosition(playerStartPosition);
	*/

	while(mainWindow.isOpen()){
		sf::Event event;
		while(mainWindow.pollEvent(event))
		{
			if(event.type == sf::Event::Closed){
				mainWindow.close();
			}
		}
		mainWindow.clear(sf::Color::Black);
		mainWindow.draw(bgSprite);
		player.playerDraw(mainWindow);
		mainWindow.display();
	}
	return 0;
}
