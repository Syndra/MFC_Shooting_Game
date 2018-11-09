#include "Transform.h"
Transform::Transform() {
	int X = -1;
	int Y = -1;
}

Transform::Transform(int X, int Y) :X(X), Y(Y) {}

Transform::~Transform(){}

int Transform::getX()
{
	return X;
}

int Transform::getY()
{
	return Y;
}

void Transform::setX(int X)
{
	Transform::X = X;
}

void Transform::setY(int Y)
{
	Transform::Y = Y;
}


