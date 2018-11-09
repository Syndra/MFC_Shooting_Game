#include "PanelObject.h"

PanelObject::PanelObject(int value, COLORREF* color=NULL, HFONT font=NULL)
{
	PanelObject::value = value;
	PanelObject::color = color;
	PanelObject::font = font;
}

PanelObject::~PanelObject()
{
	delete(color);
}

int PanelObject::getValue()
{
	return value;
}

void PanelObject::IncValue()
{
}

void PanelObject::InitValue()
{
}
