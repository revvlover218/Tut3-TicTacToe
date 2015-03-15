#include <iostream>
#include <string>
#include "NaughtsandCrosses.h"

using namespace std;

int main()
{

	int play1 = 1;
	int play2 = 2;
	char board[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	char p1 = '1';
	char p2 = '2';
	int player = 1;
	int i, choice;
	char mark;

	NaughtsandCrosses nac;		//Naughts and Crosses object
	
	do
	{
		nac.print();

		player = (player == 1) ? 1 : 2;

		cout << "Player " << player << ":\t\t" << "Enter a number: " << endl;
		cin >> choice;

		mark = (player == 1) ? 'X' : 'O';

		if (choice == 1 && board[1] == '1')

			board[1] = mark;
		else if (choice == 2 && board[2] == '2')

			board[2] = mark;
		else if (choice == 3 && board[3] == '3')

			board[3] = mark;
		else if (choice == 4 && board[4] == '4')

			board[4] = mark;
		else if (choice == 5 && board[5] == '5')

			board[5] = mark;
		else if (choice == 6 && board[6] == '6')

			board[6] = mark;
		else if (choice == 7 && board[7] == '7')

			board[7] = mark;
		else if (choice == 8 && board[8] == '8')

			board[8] = mark;
		else if (choice == 9 && board[9] == '9')

			board[9] = mark;
		else
		{
			cout << "Invalid move ";

			player--;
			cin.ignore();
			cin.get();
		}

		i = nac.isWon();
		player++;

	} while (i == -1);
	
	nac.print();
	if (i == 1)

		cout << "==>\aPlayer " << --player << " win ";
	else
	{

	cout << "==>\aGame draw";
	cin.ignore();
	cin.get();
	}
		
	
	
	system("pause");
	return 0;
};



/*cout << "Enter Player 1 name (X): " << endl
cin >> player1;

cout << "Enter Player 2 name (O): " << endl
cin >> player2;*/

//cout << "Player" << alias <<  "Enter a number: ";