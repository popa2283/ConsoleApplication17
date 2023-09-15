#pragma once
#include "Bible.h"
#include "enum.h"
class Object {
public:
	int x;
	int y;
	char symbol;
	Color color;
	Object(int x, int y, char symbol, Color cl)
	{
		this->x = x;
		this->y = y;
		this->symbol = symbol;
		this->color = cl;


	}
};