#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/OpenGL.hpp>
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	sf::RenderWindow Window(sf::VideoMode(1000, 800), "XYZ");

	float a;

	sf::RectangleShape rect[5];
	while (Window.isOpen())
	{
		sf::Event ev;
		while (Window.pollEvent(ev))
		{
			if (ev.type == sf::Event::Closed)
				Window.close();
		}
		int x = 0, y = 0;
		Window.clear();
		for (int i = 0; i < 5; i++)
		{
			cin >> a;
			rect[i].setSize(sf::Vector2f(50, a));
			rect[i].setPosition(x, y);
			rect[i].setFillColor(sf::Color::Magenta);
			x = x + 50;
		}
		for (int i = 0; i < 5; i++)
		{
			Window.draw(rect[i]);
		}
		Window.display();
	}
    return 0;
}

