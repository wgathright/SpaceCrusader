#include "SFML\Graphics.hpp"
#include "Globals.h"

//this is a git test


int main()
{
	sf::RenderWindow window(sf::VideoMode(800,400), "Space Crusader");	


	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		//========== RENDER =========//

		window.clear();

		window.display();
	}

	return 0;
}