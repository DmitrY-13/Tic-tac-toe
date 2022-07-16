#pragma once

class Board
{
//class field
private:
	static const int SIZE_ = 3;
	char matrix_[SIZE_][SIZE_]{};
//class methods
public:
	void copyMatrix(char matrix[SIZE_][SIZE_]);
	void setSymIn(int x, int y, char sym);
	void setMatrix(char matrix[SIZE_][SIZE_]);
	void clearMatrix();
	bool isEmpty(int x, int y);
	bool isFull();
	bool isWin();
};
