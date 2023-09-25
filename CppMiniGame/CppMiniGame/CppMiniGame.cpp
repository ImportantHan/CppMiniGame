#include <iostream>
#include <ctime>

#include "Game.h"

int main()
{
	srand(time(NULL));
	
	Game MiniGame;

	// Game Loop
	while (MiniGame.Running()) {
		MiniGame.EventHanler();
		MiniGame.Update();
		MiniGame.Render();
	}
}