/*
	Brandon Bailey
	CS 240 Section 003
	Jan. 12, 2018
	Homework1.cpp - A game of Craps
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	srand((unsigned)time(NULL));

	cout << "Welcome to Craps!" << endl;
	cout << "The game is starting...\n\n";

	const int WIN_ROLL = 7;
	const int WIN_ROLL2 = 11;
	const int LOSS_ROLL = 2;
	const int LOSS_ROLL2 = 3;
	const int LOSS_ROLL3 = 12;
	int die1 = (rand() % 6 + 1);
	int die2 = (rand() % 6 + 1);
	int rollValue = die1 + die2;
	int pointValue = rollValue;

	cout << "Shooter roll: " << die1 << " + " << die2 << " = " << rollValue << "\n\n";
	
	if (rollValue == WIN_ROLL || rollValue == WIN_ROLL2)
	{
		cout << "Congratulations, you win!" << endl;
		cout << "Goodbye!" << endl;
	}

	else if (rollValue == LOSS_ROLL || rollValue == LOSS_ROLL2 || rollValue == LOSS_ROLL3)
	{
		cout << "You lost!" << endl;
		cout << "Goodbye!";
	}

	else
	{
		do
		{
			cout << "Re-rolling..." << endl;
			
			die1 = (rand() % 6 + 1);
			die2 = (rand() % 6 + 1);
			rollValue = die1 + die2;

			cout << "Point Value: " << pointValue << ".";
			cout << " Next roll: " << die1 << " + " << die2 << " = " << rollValue << "\n\n";

			if (rollValue == pointValue)
			{
				cout << "You win!" << endl;
				cout << "Goodbye!" << endl;
			}

			else if (rollValue == WIN_ROLL)
			{
				cout << "You lose" << endl;
				cout << "Goodbye!" << endl;
			}
		} 
		while (rollValue != WIN_ROLL && rollValue != pointValue);
	}
}