#pragma once
#include "Player.h"
//subclass BotPlayer
class BotPlayer : public Player {
//class constuctor
public:
	BotPlayer(char sym) {
		this->sym = sym;
	}
//class methods
	int* MakeAMove();
};
