#pragma once
#include <conio.h>
#include <cctype>
#include "Player.h"

//subclass HumanPlayer
class HumanPlayer : public Player
{
//class constuctor
public:
	HumanPlayer(char sym)
	{
		sym_ = sym;
	}
//class methods
	void makeAMove(int coordinatesBuffer[2]);
};
