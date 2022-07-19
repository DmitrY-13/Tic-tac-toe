#pragma once
#include "Player.h"
#include "Board.h"
#include <vector>

//subclass BotPlayer
class BotPlayer : public Player
{
//class constuctor
public:
	BotPlayer(char sym);
//class methods
	void makeAMove(char matrix[Board::SIZE][Board::SIZE], char opponentSym, int coordinatesBuffer[2]);
private:
	void findEmptyCells(char matrix[Board::SIZE][Board::SIZE], std::vector<std::vector<int>>& emptyCellsBuffer);
	bool isOneMoveVictory(char matrix[Board::SIZE][Board::SIZE], std::vector<std::vector<int>> emptyCells,
		char sym, int coordinatesBuffer[2]);
};
