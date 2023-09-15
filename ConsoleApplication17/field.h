#pragma once
#include "Cell.h"
void filfild() {
	for (int x = 0; x < 20; x++) {
		vector<Cell>line;
		for (int y = 0; y < 20; y++)
		{
			if (x == 0 || x == 20 - 1 || y == 0 || y == 20 - 1)
			{
				line.push_back(Cell(x, y, '#', Color::GREEN, CellState::BORDER));
			}
			else
			{
				line.push_back(Cell(x, y, ' ', Color::YELLOW, CellState::EMPTI));
			}
		}
		field.push_back(line);

	}

}
void Output() {
	for (size_t i = 0; i < field.size(); i++)
	{
		for (size_t j = 0; j < field.size(); j++)
		{
			SetConsoleTextAttribute(handl, field[i][j].color);
			cout << field[i][j].symbol;
		}
		cout << endl;
	}
}