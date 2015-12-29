#ifndef WINDOW_H
#define WINDOW_H

#include"SDL.h"
#include<iostream>
using std::string;

namespace windowing
{
	class Window
	{
	public:
		Window(int, int, SDL_WindowFlags);
		~Window(void);

	private:
		string			title;
		int				width;
		int				height;

		SDL_Window*		window;
		SDL_WindowFlags flags;
	};
}

#endif
