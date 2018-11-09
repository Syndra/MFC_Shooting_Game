#include <windows.h>
#include <vector>
#include <iostream>
#include "GameObject.h"
#define MAX_COLOR 4
using namespace std;

class PanelObject {
	HFONT font;
	COLORREF* color;
	int value;

public:
	PanelObject(int, COLORREF*, HFONT);
	~PanelObject();

	int getValue();
	void IncValue();
	void InitValue();
};

