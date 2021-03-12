
#ifndef ANT_HPP
#define ANT_HPP
#include "board.hpp"


class Ant
{
private:
	Board* board;
	int xcoord, ycoord, direction;

public:
	Ant(Board*, int, int);
	int getRow();
	int getCol();
	void moveAnt(int, int);
};

#endif
