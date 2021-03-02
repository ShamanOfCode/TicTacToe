#include <iostream>
#include <stdlib.h>    // For exit() line 235

using namespace std;

// Game on
bool gameOn = true;

// Global Grid Variables
char sq1 = '1';
char sq2 = '2';
char sq3 = '3';
char sq4 = '4';
char sq5 = '5';
char sq6 = '6';
char sq7 = '7';
char sq8 = '8';
char sq9 = '9';

// Printing the grid now
int grid() {
	cout << sq1 << "|" << sq2 << "|" << sq3 << endl;
	cout << "-|-|-" << endl;
	cout << sq4 << "|" << sq5 << "|" << sq6 << endl;
	cout << "-|-|-" << endl;
	cout << sq7 << "|" << sq8 << "|" << sq9 << endl;

	return 0;
}

int playerXturn() {
	char playerX;

	cout << "\nPlayer X turn: ";
	cin >> playerX;
	cout << "" << endl;

	switch (playerX) {
		case '1':
			sq1 = 'X';
			grid();
		break;

		case '2':
			sq2 = 'X';
			grid();
		break;

		case '3':
			sq3 = 'X';
			grid();
		break;

		case '4':
			sq4 = 'X';
			grid();
		break;

		case '5':
			sq5 = 'X';
			grid();
		break;

		case '6':
			sq6 = 'X';
			grid();
		break;

		case '7':
			sq7 = 'X';
			grid();
		break;

		case '8':
			sq8 = 'X';
			grid();
		break;

		case '9':
			sq9 = '9';
			grid();
		break;
	}

	return 0;
}

int player0turn() {
	char player0;

	cout << "\nPlayer 0 turn: ";
	cin >> player0;

	switch (player0) {
		case '1':
			sq1 = '0';
			grid();
		break;

		case '2':
			sq2 = '0';
			grid();
		break;

		case '3':
			sq3 = '0';
			grid();
		break;

		case '4':
			sq4 = '0';
			grid();
		break;

		case '5':
			sq5 = '0';
			grid();
		break;

		case '6':
			sq6 = '0';
			grid();
		break;

		case '7':
			sq7 = '0';
			grid();
		break;

		case '8':
			sq8 = '0';
			grid();
		break;

		case '9':
			sq9 = '0';
			grid();
		break;
	}

	return 0;
}

int checking() {
	// checks if player X wins
	// Horizontal

	// 1 Row
	if (sq1 == 'X' && sq2 == 'X' && sq3 == 'X') {
		cout << "Player X wins!!" << endl;
		gameOn = false;
	}

	// 2 Row
	else if (sq4 == 'X' && sq5 == 'X' && sq6 == 'X') {
		cout << "Player X wins!!" << endl;
		gameOn = false;
	}

	// 3 Row
	else if (sq7 == 'X' && sq8 == 'X' && sq9 == 'X') {
		cout << "Player X wins!!" << endl;
		gameOn = false;
	}

	// Vertical
	// 1 Row
	else if (sq1 == 'X' && sq4 == 'X' && sq7 == 'X') {
		cout << "Player X wins!!" << endl;
		gameOn = false;
	}

	// 2 Row
	else if (sq2 == 'X' && sq5 == 'X' && sq8 == 'X') {
		cout << "Player X wins!!" << endl;
		gameOn = false;
	}

	// 3 Row
	else if (sq3 == 'X' && sq6 == 'X' && sq9 == 'X') {
		cout << "Player X wins!!" << endl;
		gameOn = false;
	}

	// checks if player 0 wins
	// Horizontal

	// 1 Row
	if (sq1 == '0' && sq2 == '0' && sq3 == '0') {
		cout << "Player 0 wins!!" << endl;
		gameOn = false;
	}

	// 2 Row
	else if (sq4 == '0' && sq5 == '0' && sq6 == '0') {
		cout << "Player 0 wins!!" << endl;
		gameOn = false;
	}

	// 3 Row
	else if (sq7 == '0' && sq8 == '0' && sq9 == '0') {
		cout << "Player 0 wins!!" << endl;
		gameOn = false;
	}

	// Vertical

	// 1 Row
	else if (sq1 == '0' && sq4 == '0' && sq7 == '0') {
		cout << "Player 0 wins!!" << endl;
		gameOn = false;
	}

	// 2 Row
	else if (sq2 == '0' && sq5 == '0' && sq8 == '0') {
		cout << "Player 0 wins!!" << endl;
		gameOn = false;
	}

	// 3 Row
	else if (sq3 == '0' && sq6 == '0' && sq9 == '0') {
		cout << "Player 0 wins!!" << endl;
		gameOn = false;
	}

	return 0;
}

int main() {
	// run functions when gameOn == true
	while (gameOn == true) {
		playerXturn();
		player0turn();
		checking();
	}
	exit(EXIT_SUCCESS); // exiting game

	return 0;
}
