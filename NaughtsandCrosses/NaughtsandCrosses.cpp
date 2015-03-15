#include <iostream>
#include "NaughtsandCrosses.h"
#include <stdlib.h>

using namespace std;

NaughtsandCrosses::NaughtsandCrosses()		//Default Constructor
{

}

NaughtsandCrosses::NaughtsandCrosses(char p1, char p2, char c)		//Overloaded Constructor
{
	player1 = p1;
	player2 = p2;
	board[c];

}

NaughtsandCrosses::~NaughtsandCrosses()		//Destructor
{
}



char NaughtsandCrosses::getP1()		//Accessors
{

	return player1;
}


char NaughtsandCrosses::getP2()
{

	return player2;
}


int NaughtsandCrosses::getmark()
{

	return mark;
}

void NaughtsandCrosses::setP1(char p1)	//Mutators
{
	player1 = p1;
}

void NaughtsandCrosses::setP2(char p2)
{
	player2 = p2;
}

void NaughtsandCrosses::setBoard(char b[], int l)
{

	board[l] = b[l];
}

void NaughtsandCrosses::setMark(int m)
{
	mark = m;
}


void NaughtsandCrosses::print()		//Display
{
	char board[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	system("cls");
	cout << "\n\n\t\tWelcome to TicTacToe, the C++ Game\t\t\n\n" << endl;

	cout << "Player 1 (X)\t\t-\t\tPlayer 2 (O)" << endl;
	cout << endl;

	cout << " ______ ______ ______" << endl;
	cout << "|      |      |      |" << endl;
	cout << "|   " << board[7] << "  |   " << board[8] << "  |   " << board[9] << "  |" << endl;
	cout << "|______|______|______|" << endl;
	cout << "|      |      |      |" << endl;
	cout << "|   " << board[4] << "  |   " << board[5] << "  |   " << board[6] << "  |" << endl;
	cout << "|______|______|______|" << endl;
	cout << "|      |      |      |" << endl;
	cout << "|   " << board[1] << "  |   " << board[2] << "  |   " << board[3] << "  |" << endl;
	cout << "|______|______|______|" << endl;

}  
