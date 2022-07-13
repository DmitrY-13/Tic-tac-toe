#pragma once
class Board {
//class field
private:
	static const int SIZE = 3;
	char matrix[SIZE][SIZE]{};
//class methods
public:
	void CopyMatrix(char matrix[SIZE][SIZE]);
	void WriteIn(int x, int y, char sym);
	void ClearMatrix();
	bool IsEmpty(int x, int y);
	bool IsFull();
};
