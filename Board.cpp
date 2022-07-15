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
