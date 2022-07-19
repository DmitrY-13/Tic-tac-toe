#pragma once
#include "Board.h"
#include "HumanPlayer.h"
#include "BotPlayer.h"

class Game
{
private:
	Board board;
	HumanPlayer humanPlayer;
	BotPlayer botPlayer;

public:
	Game(char humanSym, char botSym);
	void play();
private:
	void drawMatrix();
};
