#include"game.h"

Game::Game()
{
}

Game::~Game(void)
{
	if (gw)
		delete gw;

	SDL_Quit();
}