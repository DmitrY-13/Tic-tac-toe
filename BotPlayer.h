#pragma once
#include "Player.h"

//subclass BotPlayer
class BotPlayer : public Player
{
//class constuctor
public:
	BotPlayer(char sym);
//class methods
	void makeAMove(int coordinatesBuffer[2]);
};
