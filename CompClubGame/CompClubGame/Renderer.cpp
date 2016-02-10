#include "StdAfx.h"
#include "Renderer.h"
#include <cstdlib>
#include <string>
//need to declare static member variables of Renderer here so that they can be used. If you don't you get a linker error.
sf::RenderWindow Renderer::window;
sf::RenderTexture Renderer::renderTexture;
std::vector<std::pair<sf::Texture, sf::Vector2f>> Renderer::objs;
sf::Vector2f Renderer::offset;
sf::Clock Renderer::clock;
sf::Time Renderer::deltaT;
bool Renderer::mouseClick;
sf::Vector2i Renderer::mouseStart;

void Renderer::init()
{
	window.create(sf::VideoMode(600, 600), "SFML works!", sf::Style::Default);
	renderTexture.create(6000, 6000);
	deltaT = clock.getElapsedTime();
}

bool Renderer::isOpen()
{
	return window.isOpen();
}

void Renderer::update()
{
	deltaT = clock.restart();
	sf::Event event;

	if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){

		if(!mouseClick){

			mouseClick = true;
			mouseStart = sf::Vector2i(sf::Mouse::getPosition().x, sf::Mouse::getPosition().y);
		}

		else{

			offset = sf::Vector2f(offset.x + ((sf::Mouse::getPosition().x - mouseStart.x) / 100), offset.y + ((sf::Mouse::getPosition().x - mouseStart.y) / 100));
			mouseStart = sf::Mouse::getPosition();
		}
	}

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
	renderTexture.clear();

	for(unsigned int i = 0; i < objs.size(); i++)
	{
		std::pair<sf::Texture,sf::Vector2f> obj = objs.at(i);

		sf::Sprite s(obj.first);
		s.setPosition(obj.second);

		renderTexture.draw(s);
		renderTexture.display();
	}

	const sf::Texture& texture = renderTexture.getTexture();

	sf::Sprite sprite(texture);

	sprite.setPosition(offset.x, offset.y);

	window.draw(sprite);
	window.display();

	objs.clear();
}

void Renderer::addToRenderList(sf::Texture text, sf::Vector2f pos)
{
	objs.push_back(std::pair<sf::Texture,sf::Vector2f>(text,pos));
}

int Renderer::getFPS()
{
	return (int)1/deltaT.asSeconds();
}

float Renderer::deltaTime()
{
	return deltaT.asSeconds();
}