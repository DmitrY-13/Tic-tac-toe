#include <conio.h>
#include <cctype>
#include "HumanPlayer.h"
#include "Music.h"

void HumanPlayer::makeAMove(int coordinatesBuffer[2])
{
	bool isInvalid = true;
	while (isInvalid) {
		char input = toupper(_getch());
		switch (input) {
		case 'Q':
			coordinatesBuffer[0] = 0;
			coordinatesBuffer[1] = 0;
			isInvalid = false;
			break;
		case 'W':
			coordinatesBuffer[0] = 0;
			coordinatesBuffer[1] = 1;
			isInvalid = false;
			break;
		case 'E':
			coordinatesBuffer[0] = 0;
			coordinatesBuffer[1] = 2;
			isInvalid = false;
			break;
		case 'A':
			coordinatesBuffer[0] = 1;
			coordinatesBuffer[1] = 0;
			isInvalid = false;
			break;
		case 'S':
			coordinatesBuffer[0] = 1;
			coordinatesBuffer[1] = 1;
			isInvalid = false;
			break;
		case 'D':
			coordinatesBuffer[0] = 1;
			coordinatesBuffer[1] = 2;
			isInvalid = false;
			break;
		case 'Z':
			coordinatesBuffer[0] = 2;
			coordinatesBuffer[1] = 0;
			isInvalid = false;
			break;
		case 'X':
			coordinatesBuffer[0] = 2;
			coordinatesBuffer[1] = 1;
			isInvalid = false;
			break;
		case 'C':
			coordinatesBuffer[0] = 2;
			coordinatesBuffer[1] = 2;
			isInvalid = false;
			break;
		default:
			Music::error();
			break;
		}
	}
}
