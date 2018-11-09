#include <windows.h>
#include <vector>
#include <iostream>
#include "Renderer.h"
#include "Updater.h"

using namespace std;

class Window {
	vector<Renderer> renderers;
	vector<Updater> updaters;
	
public:
	Window(vector<Renderer>, vector<Updater>);
	~Window();

	void init();

};

