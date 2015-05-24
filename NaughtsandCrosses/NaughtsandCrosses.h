#ifndef NAUGHTSANDCROSSES_H
#define NAUGHTSANDCROSSES_H

enum {PLAYER1, PLAYER2, DRAW, IN_PROGRESS};

class NaughtsandCrosses
{
private:

	int player1;
	int player2;
	char board[10];
	int input;
	char again;

public:

	NaughtsandCrosses();		//Default Constructor
	~NaughtsandCrosses();		//Destructor

	int getPlayer1();
	int setPlayer1(int);

	bool restart();
	bool move(int &, char);
	void print();
	int isWon();
};

#endif