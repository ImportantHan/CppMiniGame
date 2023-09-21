#include "Game.h"

void Game::InitVariable()
{
	// nullptr : �ּҰ��� ���� ���� -> �ƹ��͵� ����Ű�� �ʴ� ����
	Window = nullptr;
}

void Game::InitWindow()
{
	this->VMode.width = 1024;
	this->VMode.height = 768;

	this->Window = new sf::RenderWindow(sf::VideoMode(this->VMode), "Mini Game", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game()
{
	this->InitVariable();
	this->InitWindow();
}

Game::~Game()
{
}

const bool Game::IsCreate()
{
	return this->Window->isOpen();
}

void Game::ExecEvent()
{
    while (this->Window->pollEvent(this->Event))
    {
        switch (this->Event.type)
        {
        case sf::Event::Closed:
            this->Window->close();
            break;

        case sf::Event::KeyPressed:
            if (Event.key.code == sf::Keyboard::Escape) {
                this->Window->close();
                break;
            }
        }
    }
}

void Game::Update()
{
}

void Game::Render()
{
}