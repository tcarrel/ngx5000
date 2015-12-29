#include"window.h"

using namespace windowing;

Window::Window(int w, int h, SDL_WindowFlags f) : width(w), height(h), flags(f)
{
	window = SDL_CreateWindow(
		title.c_str(),
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		width,
		height,
		flags);
}

Window::~Window(void)
{
	if(window)
		SDL_DestroyWindow(window);
}