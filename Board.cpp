#include "Board.h"

void Board::CopyMatrix(char matrix[SIZE][SIZE]) {
	for (int i = 0; i < (SIZE * SIZE); i++) {
		*(*matrix + i) = *(*this->matrix + i);
	}
}

void Board::WriteIn(int x, int y, char sym) {
	matrix[x][y] = sym;
}

void Board::ClearMatrix() {
	for (int i = 0; i < (SIZE * SIZE); i++) {
		*(*matrix + i) = '\0';
	}
}

bool Board::IsEmpty(int x, int y) {
	if (matrix[x][y] == '\0') {
		return true;
	}
	return false;
}

bool Board::IsFull() {
	for (int i = 0; i < (SIZE * SIZE); i++) {
		if (*(*matrix + i) == '\0') {
			return false;
		}
	}
	return true;
}
