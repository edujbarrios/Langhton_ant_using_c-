
#include"board.hpp"
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

Board::Board(char** b, int rs, int cs)
{
	board = b;
	rowSize = rs;
	colSize = cs;
}

//returns column size
int Board::getColSize()
{
	return colSize;
}

//returns row size
int Board::getRowSize()
{
	return rowSize;
}

//returns the color of a square
char Board::getColor(int x, int y)
{
	char el = board[x][y];

	//defaults empty space to white
	if (el != ' ' && el != 'X')
		return ',';

	return el;
}

//flips to either white or black depending on what is there
void Board::changeColor(int x, int y)
{
	char current = getColor(x, y);
	
	//white to black
	if (current == ',')
		board[x][y] = 'X';

	//black to white
	else
		board[x][y] = ',';

}


bool Board::isWall(int x, int y)
{
	
	if (x < 0)
		return true;
	//if x coord exceeds row size
	if (x > rowSize - 1)
		return true;

	if (y < 0)
		return true;
	//if y coord exceeds column size
	if (y > colSize - 1)
		return true;

	return false;
}