#include <windows.h>
#include <vector>
#include <iostream>
using namespace std;

class Renderer {
	HBITMAP bitmap;

public:
	Renderer();
	Renderer(HBITMAP bitmap);
	~Renderer();

	void setBitmap(HBITMAP bitmap);
};

