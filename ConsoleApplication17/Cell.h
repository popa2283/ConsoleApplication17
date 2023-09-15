#pragma once
#include "Bible.h"
#include "enum.h"
#include "Object.h"
class Cell :public Object {
public:

	CellState State;
	Cell(int x, int y, char symbol, Color c, CellState st) :Object(x, y, symbol, c) {

		this->State = st;

	}
};
vector<vector<Cell>> field;