#pragma once
#include "Bible.h"
#include "Object.h"
#include "Cell.h"
class Player :public Object {
public:
	Player(int x, int y, char c, Color cl) :Object(x, y, c, cl) {
		Spawn();
	}
	void Spawn() {
		COORD c{ x,y };
		SetConsoleCursorPosition(handl, c);
		SetConsoleTextAttribute(handl, color);
		cout << symbol;
	}
	bool BorderColision(Player p, Direction dir) {
		switch (dir)
		{
		case UP:
			p.y -= 1;
			break;
		case DOWN:
			p.y += 1;
			break;
		case RIGHT:
			p.x += 1;
			break;
		case LEFT:
			p.x -= 1;
			break;
	

		}
		if (field[p.x][p.y].State != CellState::BORDER) {
			return true;
		}
		else {
			return false;
		}

	}
};