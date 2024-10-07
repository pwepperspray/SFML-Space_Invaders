#include<iostream>
#include<SFML/Graphics.hpp>


int main(){
	
	
	int width = 940;
	int height = 540;
	float x = width-32;
	float y = height - 64;
	const float JUMPHEIGHT = 400;
	sf::RenderWindow window(sf::VideoMode(width,height), "Space Invaders",sf::Style::Close | sf::Style::Titlebar);
	
	while(window.isOpen()){
		sf::Event event;
		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed){
				window.close();
			}
		}
		window.clear();
	}
	return 0;
}
