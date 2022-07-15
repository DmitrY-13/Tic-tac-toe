#include "HumanPlayer.h"
#include "Music.h"

void HumanPlayer::MakeAMove(int coord_buffer[2]) {
	bool is_not_valid = true;
	while (is_not_valid) {
		char input = toupper(_getch());
		switch (input) {
		case 'Q':
			coord_buffer[0] = 0;
			coord_buffer[1] = 0;
			is_not_valid = false;
			break;
		case 'W':
			coord_buffer[0] = 0;
			coord_buffer[1] = 1;
			is_not_valid = false;
			break;
		case 'E':
			coord_buffer[0] = 0;
			coord_buffer[1] = 2;
			is_not_valid = false;
			break;
		case 'A':
			coord_buffer[0] = 1;
			coord_buffer[1] = 0;
			is_not_valid = false;
			break;
		case 'S':
			coord_buffer[0] = 1;
			coord_buffer[1] = 1;
			is_not_valid = false;
			break;
		case 'D':
			coord_buffer[0] = 1;
			coord_buffer[1] = 2;
			is_not_valid = false;
			break;
		case 'Z':
			coord_buffer[0] = 2;
			coord_buffer[1] = 0;
			is_not_valid = false;
			break;
		case 'X':
			coord_buffer[0] = 2;
			coord_buffer[1] = 1;
			is_not_valid = false;
			break;
		case 'C':
			coord_buffer[0] = 2;
			coord_buffer[1] = 2;
			is_not_valid = false;
			break;
		default:
			Music::Error();
			break;
		}
	}
}
