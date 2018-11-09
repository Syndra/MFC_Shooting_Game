#include "Window.h"

Window::Window(vector<Renderer> renderers, vector<Updater> updaters)
{
	Window::renderers = renderers;
	Window::updaters = updaters;
}

Window::~Window()
{	
}

void Window::init()
{
}
