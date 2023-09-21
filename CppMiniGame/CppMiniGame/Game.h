#pragma once

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

class Game
{
	// Window
	sf::RenderWindow* Window;
	sf::VideoMode VMode;

	// Event
	sf::Event Event;

	void InitVariable();
	void InitWindow();

public:
	// default constructor
	Game();
	// destructor
	~Game();

	// function
	const bool IsCreate();
	void ExecEvent();
	void Update();
	void Render();
};

