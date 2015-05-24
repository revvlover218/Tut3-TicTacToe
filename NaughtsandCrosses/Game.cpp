#include "NaughtsandCrosses.h"
#include <iostream>

using namespace std;

int main()
{
	char alias;
	bool done = false;
	NaughtsandCrosses nc;
	int currentPlayer = 1;
	char mark;
	int result;


	while (!done)
	{
		nc.print();

		currentPlayer = (currentPlayer % 2) ? 1 : 2;

		mark = (currentPlayer == 1) ? 'X' : 'O';

		if (!nc.move(currentPlayer, mark))
		{

			cout << "Invalid move ";
			currentPlayer--;
		}

		result = nc.isWon();
		currentPlayer++;

		if (result == 1)
		{
			
			cout << "Player: " << currentPlayer << " wins!";
			done = true;
			if (!nc.restart())
			{
				done = true;
			}
			if (nc.restart())
			{
				done = false;
			}
		}

		else if (result == 0)
		{
			cout << "Game is a draw";
			done = true;
			if (!nc.restart())
			{
				done = true;
			}
			if (nc.restart())
			{
				done = false;
			}
			
		}

		}

	//system("PAUSE");

	return 0;
};
