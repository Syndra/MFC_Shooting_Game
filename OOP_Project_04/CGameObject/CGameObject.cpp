#include "GameObject.h"

GameObject::GameObject(Transform *transform, Renderer *renderer, Updater *updater)
{
	GameObject::transform = transform;
	GameObject::renderer = renderer;
	GameObject::updater = updater;
}

GameObject::~GameObject()
{
	delete(transform);
	delete(renderer);
	delete(updater);
}
