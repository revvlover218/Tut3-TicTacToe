#ifndef NAUGHTSANDCROSSES_H
#define NAUGHTSANDCROSSES_H


class NaughtsandCrosses
{
private:

	/*string player1 = "Player1";		// For when using the player name instead
	string player2 = "Player2";*/

	char player1 = 'X';
	char player2 = 'O';
	char board[10];
	//char board[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int mark;

public:
	
	NaughtsandCrosses();		//Default Constructor
	NaughtsandCrosses(char, char, char, int);		//Overloaded constructor
	~NaughtsandCrosses();		//Destructor

	char getP1();		//Accessors and Mutators
	char getP2();
	//char getBoard();
	int getmark();

	void setP1(char p1);
	void setP2(char p2);
	void setBoard(char b[], int l);
	void setMark(const int m);


	void restart();		//Required Methods
	bool move();
	void print();
	int isWon();




};

#endif