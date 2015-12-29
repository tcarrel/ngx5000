#ifndef GAME_H
#define GAME_H

#include"window.h"
#include"input_handler.h"

class Game
{
public:
	Game(void);
	~Game(void);
private:
	windowing::Window*		gw;
	CMD::Input_handler		ih;
};

#endif
