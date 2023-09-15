#include "Bible.h"
#include "enum.h"
#include "Object.h"
#include "Player.h"
#include "Cell.h"
#include "field.h"
template<typename T>
void SetObjectPlace(T objectNew, T objectOld) {
	if (typeid(T) == typeid(Player))
	{
		COORD c{ objectOld.x, objectOld.y };
		SetConsoleCursorPosition(handl, c);
		cout << ' ';
		c.X = objectNew.x; c.Y = objectNew.y;
		SetConsoleCursorPosition(handl, c);
		SetConsoleTextAttribute(handl, objectNew.color);
		cout << objectNew.symbol;
	}
}
void movent(Player& player) {
	while (true)
	{
		if (_kbhit()) {
			Player oldplayr = player;
			char tappedKey = _getch();
			if (tappedKey == 'w' || tappedKey == 'ц') {
				if (player.BorderColision(player, Direction::UP)) {
					player.y -= 1;
					SetObjectPlace(player, oldplayr);
				}
			}
			if (tappedKey == 'a' || tappedKey == 'ф') {
				if (player.BorderColision(player, Direction::LEFT)) {
					player.x += 1;
					SetObjectPlace(player, oldplayr);
				}
			}
			if (tappedKey == 's' || tappedKey == 'ы') {
				if (player.BorderColision(player, Direction::DOWN)) {
					player.y += 1;
					SetObjectPlace(player, oldplayr);
				}
			}
			if (tappedKey == 'd' || tappedKey == 'в') {
				if (player.BorderColision(player, Direction::RIGHT)) {
					player.x += 1;
					SetObjectPlace(player, oldplayr);
				}
			}
		}
	}
}
int main()
{



	filfild();
	Output();
	Player player(10, 10, '@', Color::RED);
	movent(player);
	while (true) {
		
	}

}
