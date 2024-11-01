#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include "entity.h"

const int WIN_WIDTH = 800;
const int WIN_HEIGHT = 800;
const int ENEMY_ROWS = 3;
const int ENEMY_COLUMNS = 10;	
//const sf::Vector2f SCALE(6.0,6.0);
sf::Vector2f playerStartPosition(WIN_WIDTH / 2, WIN_HEIGHT - 32);

void menuScreen(sf::RenderWindow &window, sf::Texture* bgTexture);
void endScreen(sf::RenderWindow &window, sf::Texture* bgTexture);
void run(sf::RenderWindow &window, sf::Texture* bgTexture);


int main(){
	sf::RenderWindow mainWindow(sf::VideoMode(WIN_WIDTH,WIN_HEIGHT), "SFML-Space_Invaders", sf::Style::Close | sf::Style::Titlebar);
	sf::Texture bgImage;
	if(!bgImage.loadFromFile(".//data//sprites//bg.jpg")){
		std::cerr << "Failed to load bg \n";
	}	
	//menuScreen(mainWindow, &bgImage);
	run(mainWindow, &bgImage);
	return 0;
}

void menuScreen(sf::RenderWindow &window, sf::Texture* bgImage){
	sf::Font font;
	font.loadFromFile(".//data//font//DS-DIGII.TTF");

	sf::Text titleText, authorText, startText;
	titleText.setString("Space Invaders");
	titleText.setCharacterSize(75);
	titleText.setFont(font);
	titleText.setFillColor(sf::Color::Cyan);
	titleText.setPosition((WIN_WIDTH / 2) - 230, 0);
	
	authorText.setString("created by pwepperspray");
	authorText.setCharacterSize(25);
	authorText.setFont(font);
	authorText.setFillColor(sf::Color::Cyan);
	authorText.setPosition((WIN_WIDTH / 2) - 138, 100);

	startText.setString("Press Enter to Start");
	startText.setCharacterSize(25);
	startText.setFont(font);
	startText.setFillColor(sf::Color::Cyan);
	startText.setPosition((WIN_WIDTH / 2) - 105, WIN_HEIGHT / 2);

	sf::Sprite bgSprite(*bgImage);
	
	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}
		if(sf::Keyboard::isKeyPressed(sf::Keyboard::Enter)){
			//1break;
			run(window, bgImage);
		}

		window.clear(sf::Color::Black);
		window.draw(bgSprite);
		window.draw(titleText);
		window.draw(authorText);
		window.draw(startText);
		window.display();
	}
}

void run(sf::RenderWindow &window, sf::Texture* bgImage){

	sf::Sprite bgSprite(*bgImage);
	bgSprite.setScale(0.4,0.5);

	sf::Texture playerTexture;
	if(!playerTexture.loadFromFile(".//data//sprites//player.png")){
		std::cerr << "Player Texture failed to load \n";
	}

	sf::Texture enemyTexture1;
	if(!enemyTexture1.loadFromFile(".//data//sprites//green.png")){
		std::cerr << "Enemy1 texture failed to load \n";
	}
	sf::Texture enemyTexture2;
	if(!enemyTexture2.loadFromFile(".//data//sprites//yellow.png")){
		std::cerr << "Enemy2 texture failed to load \n";
	}
	sf::Texture enemyTexture3;
	if(!enemyTexture3.loadFromFile(".//data//sprites//red.png")){
		std::cerr << "Enemy3 texture failed to load \n";
	}
	
	//creating entities
	Player spaceShip(&playerTexture,playerStartPosition);
	Enemy alien1(&enemyTexture1,sf::Vector2f(80,260));
	Enemy alien2(&enemyTexture2,sf::Vector2f(80,180));
	Enemy alien3(&enemyTexture3,sf::Vector2f(80,100));

	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}

		if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
			spaceShip.Move('R');
		}else if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
			spaceShip.Move('L');
		}else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)){
			std::cout << "paused\n";
		}else{
			//empty
		}

		window.clear(sf::Color::Black);
		window.draw(bgSprite);
		spaceShip.Draw(window);
		alien1.Draw(window);
		alien2.Draw(window);
		alien3.Draw(window);
		window.display();
	} 
}
