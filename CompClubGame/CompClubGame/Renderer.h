#pragma once
#include <SFML/Graphics.hpp>


class Renderer
{

public:
	static void init();
	static void update();
	static bool isOpen();
	static void render();
	static void addToRenderList(sf::Texture text, sf::Vector2f pos);
	Renderer(void);
	~Renderer(void);
	static int getFPS();
	static float deltaTime();
	static sf::Vector2f offset;
protected:
	static sf::RenderWindow window;
	static sf::RenderTexture renderTexture;
	static std::vector<std::pair<sf::Texture, sf::Vector2f>> objs;
	static sf::Clock clock;
	static sf::Time deltaT;
	static bool mouseClick;
	static sf::Vector2i mouseStart;
};

