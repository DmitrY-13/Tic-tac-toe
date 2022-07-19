#pragma once

class Board
{
//class fields
public:
	static const int SIZE = 3;
private:
	char matrix_[SIZE][SIZE]{};
//class methods
public:
	void copyMatrix(char matrix[SIZE][SIZE]);
	void setSymIn(int x, int y, char sym);
	void setMatrix(char matrix[SIZE][SIZE]);
	bool isEmpty(int x, int y);
	bool isFull();
	bool isWin();
};
