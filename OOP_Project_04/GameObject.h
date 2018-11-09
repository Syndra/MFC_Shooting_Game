#include <windows.h>
#include <vector>
#include <iostream>
#include "Transform.h"
#include "Renderer.h"
#include "Updater.h"

using namespace std;

class GameObject {
	Transform *transform;
	Renderer *renderer;
	Updater *updater;
public:
	GameObject(Transform*, Renderer*, Updater*);
	virtual ~GameObject();
};

