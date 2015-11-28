#include "StdAfx.h"
#include "Renderer.h"

//need to declare static member variables of Renderer here so that they can be used. If you don't you get a linker error.
sf::RenderWindow Renderer::window;
std::vector<std::pair<sf::Texture, sf::Vector2f>> Renderer::objs;

void Renderer::init()
{
	window.create(sf::VideoMode(600, 600), "SFML works!", sf::Style::Default);
}

bool Renderer::isOpen()
{
	return window.isOpen();
}

void Renderer::update()
{
	sf::Event event;
	while (window.pollEvent(event))
	{
		if ((event.type == sf::Event::Closed) || (event.type == sf::Event::KeyPressed && sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)))
		{
			window.close();
		}
			
	}

}

void Renderer::render()
{
	window.clear();

	for(unsigned int i = 0; i < objs.size(); i++)
	{
		std::pair<sf::Texture,sf::Vector2f> obj = objs.at(i);

		sf::Sprite s(obj.first);
		s.setPosition(obj.second);

		window.draw(s);
	}

	window.display();

	objs.clear();
}

void Renderer::addToRenderList(sf::Texture text, sf::Vector2f pos)
{
	objs.push_back(std::pair<sf::Texture,sf::Vector2f>(text,pos));
}