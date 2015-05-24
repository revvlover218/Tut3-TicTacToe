#include <iostream>
#include "NaughtsandCrosses.h"

using namespace std;

NaughtsandCrosses::NaughtsandCrosses()
{

	player1 = 'X';
	player2 = 'O';
	
	for (int i = 0; i < 10; i++)
	{
		board[i] = ' ';
	}

}

NaughtsandCrosses::~NaughtsandCrosses()
{
}



bool NaughtsandCrosses::restart(bool &done, char board[])
{

	if (done)
		for (char i = '1'; i < '10'; i++)
		{
			board[i] = i;
		}

		return done = false;
}

bool NaughtsandCrosses::move(int currentPlayer, char playTurn, bool &legalMove, char board[])
{

	cout << "Player:" << currentPlayer << "Enter a number in the table";
	cin >> playTurn;

	if (playTurn >= '1' && playTurn <= '9')
	{
		return true;
	}

	else
	{
		return false;
	}
}

void NaughtsandCrosses::print()
{

	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << board[1] << "  |  " << board[2] << "  |  " << board[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << board[4] << "  |  " << board[5] << "  |  " << board[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << board[7] << "  |  " << board[8] << "  |  " << board[9] << endl;

	cout << "     |     |     " << endl << endl;
}