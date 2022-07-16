#pragma once
#include "Player.h"

//subclass HumanPlayer
class HumanPlayer : public Player
{
//class constuctor
public:
	HumanPlayer(char sym);
//class methods
	void makeAMove(int coordinatesBuffer[2]);
};
