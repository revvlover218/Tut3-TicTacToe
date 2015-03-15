#ifndef NAUGHTSANDCROSSES_H
#define NAUGHTSANDCROSSES_H

class NaughtsandCrosses
{
private:

	char player1 = 'X';
	char player2 = 'O';

public:

	NaughtsandCrosses();		//Default Constructor
	NaughtsandCrosses(char);		//Overloaded constructor
	~NaughtsandCrosses();		//Destructor

	char getP1();		//Accessors and Mutators
	char getP2();

	void setP1();
	void setP2();

	char board[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	void restart();
	void move();
	void print();
	void isWon();




};

#endif