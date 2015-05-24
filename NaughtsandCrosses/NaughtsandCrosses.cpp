#include <iostream>
#include "NaughtsandCrosses.h"

using namespace std;

NaughtsandCrosses::NaughtsandCrosses()
{

	player1 = 'X';
	player2 = 'O';
	
	board[0] = 'o';
	board[1] = '1';
	board[2] = '2';
	board[3] = '3';
	board[4] = '4';
	board[5] = '5';
	board[6] = '6';
	board[7] = '7';
	board[8] = '8';
	board[9] = '9';
}

NaughtsandCrosses::~NaughtsandCrosses()
{
}

int NaughtsandCrosses::getPlayer1()
{
	return player1;
}

int NaughtsandCrosses::setPlayer1(int playerIn)
{
	player1 = playerIn;
	return player1;
}

bool NaughtsandCrosses::restart()
{

	cout << "\n\nPlay again? Enter Y or N";
	cin >> again;

	if (again == 'Y')
		NaughtsandCrosses();
	return true;
	if (again == 'N')
	return false;
}

bool NaughtsandCrosses::move(int &currentPlayer, char mark)
{

	cout << "Player:" << currentPlayer << "Enter a number in the table";
	cin >> input;

	if (input == 1 && board[1] == ' ')
		board[1] = mark;

	else if (input == 2 && board[2] == ' ')
		board[2] = mark;

	else if (input == 3 && board[3] == ' ')
		board[3] = mark;

	else if (input == 4 && board[4] == ' ')
		board[4] = mark;

	else if (input == 5 && board[5] == ' ')
		board[5] = mark;

	else if (input == 6 && board[6] == ' ')
		board[6] = mark;

	else if (input == 7 && board[7] == ' ')
		board[7] = mark;

	else if (input == 8 && board[8] == ' ')
		board[8] = mark;

	else if (input == 9 && board[9] == ' ')
		board[9] = mark;
	else
	{
		cin.ignore();
		cin.get();
		return false;
	}

	return true;
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

int NaughtsandCrosses::isWon()
{
	if (board[1] == board[2] && board[2] == board[3])

		return 1;
	else if (board[4] == board[5] && board[5] == board[6])

		return 1;
	else if (board[7] == board[8] && board[8] == board[9])

		return 1;
	else if (board[1] == board[4] && board[4] == board[7])

		return 1;
	else if (board[2] == board[5] && board[5] == board[8])

		return 1;
	else if (board[3] == board[6] && board[6] == board[9])

		return 1;
	else if (board[1] == board[5] && board[5] == board[9])

		return 1;
	else if (board[3] == board[5] && board[5] == board[7])

		return 1;
	else if (board[1] != '1' && board[2] != '2' && board[3] != '3'
			 && board[4] != '4' && board[5] != '5' && board[6] != '6'
			 && board[7] != '7' && board[8] != '8' && board[9] != '9')
				return 0;
	else
		return -1;
}