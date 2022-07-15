#pragma once
#include <conio.h>
#include <cctype>
#include "Player.h"
//subclass HumanPlayer
class HumanPlayer : public Player {
//class constuctor
public:
	HumanPlayer(char sym) {
		this->sym = sym;
	}
//class methods
	void MakeAMove(int coord_buffer[2]);
};
