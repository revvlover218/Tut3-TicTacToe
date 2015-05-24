#ifndef NAUGHTSANDCROSSES_H
#define NAUGHTSANDCROSSES_H

enum {PLAYER1, PLAYER2, DRAW, IN_PROGRESS};

class NaughtsandCrosses
{
private:

	char player1;
	char player2;
	char board[10];

public:

	NaughtsandCrosses();		//Default Constructor
	~NaughtsandCrosses();		//Destructor

	bool restart(bool &, char board[]);
	bool move(int, char, bool&, char board[]);
	void print();
	void isWon();
};

#endif