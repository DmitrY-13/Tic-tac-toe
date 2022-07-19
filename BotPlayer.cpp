#include <ctime>
#include "BotPlayer.h"

BotPlayer::BotPlayer(char sym) : Player::Player(sym)
{
}

void BotPlayer::makeAMove(char matrix[Board::SIZE][Board::SIZE], char opponentSym, int coordinatesBuffer[2])
{
	std::vector<std::vector<int>> emptyCells;
	findEmptyCells(matrix, emptyCells);

	if (isOneMoveVictory(matrix, emptyCells, SYM, coordinatesBuffer))  //checking for the possibility of victory and implementing it
		return;

	if (isOneMoveVictory(matrix, emptyCells, opponentSym, coordinatesBuffer))  //checking for the possibility of defeat and preventing it
		return;

	srand(time(0));
	int randomMoveId = rand() % emptyCells.size();  //choosing a random move
	coordinatesBuffer[0] = emptyCells[randomMoveId][0];
	coordinatesBuffer[1] = emptyCells[randomMoveId][1];
}

void BotPlayer::findEmptyCells(char matrix[Board::SIZE][Board::SIZE], std::vector<std::vector<int>>& emptyCellsBuffer)
{
	emptyCellsBuffer.clear();
	for (int i = 0; i < Board::SIZE; i++)
		for (int j = 0; j < Board::SIZE; j++)
			if (matrix[i][j] == '\0') {
				emptyCellsBuffer.push_back(std::vector<int>());
				emptyCellsBuffer.back().push_back(i);
				emptyCellsBuffer.back().push_back(j);
			}
}

bool BotPlayer::isOneMoveVictory(char matrix[Board::SIZE][Board::SIZE], std::vector<std::vector<int>> emptyCells, char sym,
	int coordinatesBuffer[2])
{
	for (int i = 0; i < emptyCells.size(); i++) {
		Board board;
		board.setMatrix(matrix);
		board.setSymIn(emptyCells[i][0], emptyCells[i][1], sym);
		if (board.isWin()) {
			coordinatesBuffer[0] = emptyCells[i][0];
			coordinatesBuffer[1] = emptyCells[i][1];
			return true;
		}
	}
	return false;
}
