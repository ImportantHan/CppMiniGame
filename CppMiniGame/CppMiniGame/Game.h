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
	// Window 포인터 변수 Initialize
	void InitWindowPointer();
	// Window 동적 생성
	void InitWindow();
	// 동적 생성된 Window 삭제
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


	/*
		Game Loop
	*/
	// 앞 const : 반환값이 변경되지 않음
	// 뒤 const : 매개변수, 함수 내부 값
	const bool Running() const;
	void EventHanler();
	void Update();
	void Render();
};

