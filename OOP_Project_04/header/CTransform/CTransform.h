#include <windows.h>
#include <vector>
#include <iostream>
using namespace std;

class Transform {
	int X, Y;
	
public:
	Transform();
	Transform(int X, int Y);
	~Transform();

	int getX();
	int getY();
	void setX(int X);
	void setY(int Y);
};

