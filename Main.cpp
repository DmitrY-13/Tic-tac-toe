#include <iostream>
#include <conio.h>
#include "Game.h"
#include "Music.h"

using namespace std;

void getSymbols(char& humanSym, char& botSym);

int main()
{
	cout << "~use the English layout~" << endl << endl;

	cout << "Pick you'r symbol!" << endl;
	cout << "[Q] - X" << endl;
	cout << "[W] - 0" << endl;

	char humanSym, botSym;
	getSymbols(humanSym, botSym);

	while (true) {
		system("cls");
		Game game(humanSym, botSym);
		game.play();

		cout << endl;
		cout << "Play again?" << endl;
		cout << "[Y] - Yes" << endl;
		cout << "[Other key] - No" << endl;
		
		if (toupper(_getch()) != 'Y')
			return 0;
	}
}

void getSymbols(char& humanSym, char& botSym) {
	while (true) {
		char input = toupper(_getch());
		switch (input) {
		case 'Q':
			humanSym = 'X';
			botSym = '0';
			return;
		case 'W':
			humanSym = '0';
			botSym = 'X';
			return;
		default:
			Music::error();
			break;
		}
	}
}
