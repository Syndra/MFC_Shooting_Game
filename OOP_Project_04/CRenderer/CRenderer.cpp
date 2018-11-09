#include "Renderer.h"

Renderer::Renderer()
{
}

Renderer::Renderer(HBITMAP bitmap)
{
	Renderer::bitmap = bitmap;
}

Renderer::~Renderer(){}

void Renderer::setBitmap(HBITMAP bitmap)
{
	Renderer::bitmap = bitmap;
}
