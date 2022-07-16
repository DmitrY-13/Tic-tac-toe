#include "Board.h"

void Board::copyMatrix(char matrix[SIZE_][SIZE_])
{
	for (int i = 0; i < (SIZE_ * SIZE_); i++)
		*(*matrix + i) = *(*matrix_ + i);
}

void Board::setSymIn(int x, int y, char sym)
{
	matrix_[x][y] = sym;
}

void Board::setMatrix(char matrix[SIZE_][SIZE_])
{
	for (int i = 0; i < (SIZE_ * SIZE_); i++)
		*(*matrix_ + i) = *(*matrix + i);
}

void Board::clearMatrix()
{
	for (int i = 0; i < (SIZE_ * SIZE_); i++)
		*(*matrix_ + i) = '\0';
}

bool Board::isEmpty(int x, int y)
{
	if (matrix_[x][y] == '\0')
		return true;
	return false;
}

bool Board::isFull()
{
	for (int i = 0; i < (SIZE_ * SIZE_); i++)
		if (*(*matrix_ + i) == '\0')
			return false;
	return true;
}

bool Board::isWin()
{
	if (
		matrix_[0][0] == matrix_[0][1] && matrix_[0][0] == matrix_[0][2] &&  //top row
		matrix_[0][0] != '\0' ||

		matrix_[1][0] == matrix_[1][1] && matrix_[1][0] == matrix_[1][2] &&  //middle row
		matrix_[1][0] != '\0' ||

		matrix_[2][0] == matrix_[2][1] && matrix_[2][0] == matrix_[2][2] &&  //bottom row
		matrix_[2][0] != '\0' ||

		matrix_[0][0] == matrix_[1][0] && matrix_[0][0] == matrix_[2][0] &&  //left column
		matrix_[0][0] != '\0' ||

		matrix_[0][1] == matrix_[1][1] && matrix_[0][1] == matrix_[2][1] &&  //middle column
		matrix_[0][1] != '\0' ||

		matrix_[0][2] == matrix_[1][2] && matrix_[0][2] == matrix_[2][2] &&  //right column
		matrix_[0][2] != '\0' ||

		matrix_[0][0] == matrix_[1][1] && matrix_[0][0] == matrix_[2][2] &&  //diagonal from top-left to bottom-right
		matrix_[0][0] != '\0' ||

		matrix_[0][2] == matrix_[1][1] && matrix_[0][2] == matrix_[2][0] &&  //diagonal from top-right to bottom-left
		matrix_[0][2] != '\0'
		) return true;
	return false;
}
