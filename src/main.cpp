#include <iostream>
#include <SFML/Graphics.hpp>
#include "entity.h"

int main(){
	const int WIN_WIDTH = 800;
	const int WIN_HEIGHT = 800;
	const int ENEMY_ROWS = 3;
        const int ENEMY_COLUMNS = 10;	
	const sf::Vector2f SCALE(6.0,6.0);

	sf::Vector2f playerStartPosition(WIN_WIDTH / 2, WIN_HEIGHT - 32);
	sf::IntRect playerRect(0,8,8,8);
	//enemy levels

	//creating a 2d array to store the position of aliens along with their difficulty
	/*sample enemy grid
	 *[hard,hard,hard]
	 *[medium,medium,medium]
	 *[easy,easy,easy]
	 *hard = 0
	 *medium = 1 
	 *easy = 2
	 * */
	int enemyGrid[ENEMY_ROWS][ENEMY_COLUMNS];
	for(int i = 0; i < ENEMY_ROWS; i++){
		for(int j = 0; j < ENEMY_COLUMNS; j++){
			if(i == 0){
			 	enemyGrid[i][j] = i;
			}
			else if(i == 1){
				enemyGrid[i][j] = i;
			}
			else{
				enemyGrid[i][j] = i;
			}
		}
	}

	for(int i = 0; i < ENEMY_ROWS; i++){
		for(int j = 0; j < ENEMY_COLUMNS; j++){
			std::cout << " " << enemyGrid[i][j];
		}
		std::cout << "\n";
	}

	sf::RenderWindow mainWindow(sf::VideoMode(WIN_WIDTH,WIN_HEIGHT), "Space Invaders", sf::Style::Close | sf::Style::Titlebar);
	
	//loading background texture 
	sf::Texture bgTexture;
	if(!bgTexture.loadFromFile(".//data//sprites//bg.jpg")){
		std::cerr << "Failed to load bg \n";
	} 
	//loading background texture to sprite
	sf::Sprite bgSprite(bgTexture);
	bgSprite.setScale(0.4,0.5);

	//loading player texture
	sf::Texture playerTexture;
	if(!playerTexture.loadFromFile(".//data//sprites//player.png")){
		std::cerr << "Player Texture failed to load \n";
	}
	//loading enemy texture
	sf::Texture enemyTexture1;
	if(!enemyTexture1.loadFromFile(".//data//sprites//enemy1.png")){
		std::cerr << "Enemy1 texture failed to load \n";
	}
	//creating player object
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
