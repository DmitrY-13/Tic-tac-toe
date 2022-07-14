#pragma once
#include "Player.h"
//subclass HumanPlayer
class HumanPlayer : public Player {
//class constuctor
public:
	HumanPlayer(char sym) {
		this->sym = sym;
	}
//class methods
	int* MakeAMove();
};
