#pragma once

#include <vector>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;

class Game
{
private:
	/*
		Window
	*/
	RenderWindow* Window;
	Event e;
	// Window ������ ���� Initialize
	void InitWindowPointer();
	// Window ���� ����
	void InitWindow();
	// ���� ������ Window ����
	void DeleteWindow();

	/*
		Enemy
	*/
	RectangleShape RectEnemy;
	// Rect Enemy vecotr
	vector<RectangleShape> RectEnemies;
	// Spawn Value
	float EnemySpawnTime;
	float EnemySpawnTimeMax;
	int EnemyMaxNumber;
	// Init RectEnemy
	void InitRectEnemy();
	// Set Spawn Vlaue
	void SetSpawnValue();

	/*
		Player
	*/
	CircleShape Player;
	// Init Player
	void InitPlayer();


public:
	// Constructor
	Game();
	// Destructor
	~Game();

	/* 
		Enemy
	*/
	// Spawn Enemy
	void SpawnEnemy();
	void UpdateEnemy();

	/*
		Player
	*/
	void UpdatePlayer();

	/*
		Collision
	*/
	void UpdateCollision();
	void GameOver();

	/*
		Game Loop
	*/
	// �� const : ��ȯ���� ������� ����
	// �� const : �Ű�����, �Լ� ���� ��
	const bool Running() const;
	void EventHanler();
	void Update();
	void Render();
};

