#include "Game.h"

void Game::InitWindowPointer()
{
	this->Window = nullptr;
}

void Game::InitWindow()
{
	Window = new RenderWindow(VideoMode(1024, 768), "Mini Game", Style::Titlebar | Style::Close);
	this->Window->setFramerateLimit(60);
}

void Game::DeleteWindow()
{
	delete this->Window;
}

void Game::InitRectEnemy()
{
	RectEnemy.setSize(Vector2f(50.0f, 50.0f));
	RectEnemy.setFillColor(Color::Blue);
	RectEnemy.setPosition(33.0f, 33.0f);
}

void Game::SetSpawnValue()
{
	this->EnemySpawnTime = 0.0f;
	this->EnemySpawnTimeMax = 10.0f;
	this->EnemyMaxNumber = 5;
}

Game::Game()
{
	// Window
	this->InitWindowPointer();
	this->InitWindow();

	// Enemy
	this->InitRectEnemy();
	this->SetSpawnValue();
}

Game::~Game()
{
	this->DeleteWindow();
}

void Game::SpawnEnemy()
{
	this->RectEnemy.setPosition(static_cast<float>(rand() % 1024), 0.0f);
	this->RectEnemies.push_back(this->RectEnemy);
}

const bool Game::Running() const
{
	return this->Window->isOpen();
}

void Game::EventHanler()
{
	while (this->Window->pollEvent(e)) {
		switch (e.type) {
		case Event::Closed:
			this->Window->close();
			break;
		}
	}
}

void Game::Update()
{
	// �� �����쿡 ǥ�õǴ� �ִ� ���� ����
	if (this->RectEnemies.size() < this->EnemyMaxNumber) {
		// ���� �����Ǵ� �ð� ����
		if (this->EnemySpawnTime >= this->EnemySpawnTimeMax) {
			this->SpawnEnemy();
			this->EnemySpawnTime = 0.0f;
		}
		else {
			this->EnemySpawnTime += 1.0f;
		}
	}
	
	// ������ ���� �����Ǵ� ��� ������
	for (int i = 0; i < this->RectEnemies.size(); i++) {
		this->RectEnemies[i].move(0.0f, 3.0f);
	}
}

void Game::Render()
{
	// ���� �����ӿ� �׷��� ������ ����
	this->Window->clear();
	// draw object
	for (int i = 0; i < this->RectEnemies.size(); i++) {
		this->Window->draw(this->RectEnemies[i]);
	}
	// display
	this->Window->display();
}