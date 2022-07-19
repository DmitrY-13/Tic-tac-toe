#pragma once

//super class Player
class Player
{
//class fields
protected:
	const char SYM_;
//class constructor
public:
	Player(char sym);
//class methods
	char getSym();
};
