#include <iostream>
#include "Game.h"
#include "Music.h"

Game::Game(char humanSym, char botSym)
	: humanPlayer(humanSym), botPlayer(botSym)
{
}

void Game::play()
{
	int coordinatesBuffer[2]{};
	char lastMoveSym = '\0';

	char matrix[3][3]{};
	
	drawMatrix();

	while (true) {
		board.copyMatrix(matrix);
		
		if (lastMoveSym == '\0' || lastMoveSym == botPlayer.SYM)
		{
			while (true) {
				humanPlayer.makeAMove(coordinatesBuffer);
				if (matrix[coordinatesBuffer[0]][coordinatesBuffer[1]] == '\0') {
					lastMoveSym = humanPlayer.SYM;
					break;
				}
				Music::error();
			}
		}
		else {
			botPlayer.makeAMove(matrix, humanPlayer.SYM, coordinatesBuffer);
			lastMoveSym = botPlayer.SYM;
		}

		board.setSymIn(coordinatesBuffer[0], coordinatesBuffer[1], lastMoveSym);

		system("cls");
		drawMatrix();

		if (board.isWin()) {
			if (lastMoveSym == humanPlayer.SYM) {
				std::cout << "You win!" << std::endl;
				Music::win();
				return;
			}
			else {
				std::cout << "You lose!" << std::endl;
				Music::lose();
				return;
			}
		}
		else if (board.isFull()) {
			std::cout << "Draw!" << std::endl;
			Music::draw();
			return;
		}
	}
}

void Game::drawMatrix()
{
	char matrix[3][3]{};
	board.copyMatrix(matrix);

	for (int i = 0; i < (Board::SIZE * Board::SIZE); i++)
		if (*(*matrix + i) == '\0')
			*(*matrix + i) = ' ';

	std::cout << "[Q]  |[W]  |[E]" << std::endl;
	std::cout << "  " << matrix[0][0] << "  |  " << matrix[0][1] << "  |  " << matrix[0][2] << std::endl;
	std::cout << "     |     |" << std::endl;
	std::cout << "_________________" << std::endl;
	std::cout << "[A]  |[S]  |[D]" << std::endl;
	std::cout << "  " << matrix[1][0] << "  |  " << matrix[1][1] << "  |  " << matrix[1][2] << std::endl;
	std::cout << "     |     |" << std::endl;
	std::cout << "_________________" << std::endl;
	std::cout << "[Z]  |[X]  |[C]" << std::endl;
	std::cout << "  " << matrix[2][0] << "  |  " << matrix[2][1] << "  |  " << matrix[2][2] << std::endl;
	std::cout << "     |     |" << std::endl;
}
