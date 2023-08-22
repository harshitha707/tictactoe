#include "tictactoe.h"
#include <iostream>
#include <algorithm>

void tictactoe::start() {
	int result = 0;
	while (result == 0) {
		update();
		result = check();
	}
	stop();
}

void tictactoe::stop() {

}

void tictactoe::update() {
	int pos;
	std::cout << "pick a number from 1-9" << std::endl;
	std::cin >> pos;
	place(pos, turn);
	if (turn == piece::X) {
		turn = piece::O;
	}
	else {
		turn = piece::X;
	}
}

void tictactoe::place(int pos, piece p) {
	--pos;
	if (board[pos] == 0) {
		board[pos] = p;
	}
}

int tictactoe::check() {
	//horizontal 
	if (board[0] != 0 && board[0] == board[1] && board[0] == board[2]) {
		return board[0];
	}
	if (board[3] != 0 && board[3] == board[4] && board[3] == board[5]) {
		return board[3];
	}
	if (board[6] != 0 && board[6] == board[7] && board[6] == board[8]) {
		return board[6];
	}
	//vertical
	if (board[0] != 0 && board[0] == board[3] && board[0] == board[6]) {
		return board[0];
	}
	if (board[1] != 0 && board[1] == board[4] && board[1] == board[7]) {
		return board[1];
	}
	if (board[2] != 0 && board[2] == board[5] && board[2] == board[8]) {
		return board[2];
	}
	//diagonal
	if (board[0] != 0 && board[0] == board[4] && board[0] == board[8]) {
		return board[0];
	}
	if (board[2] != 0 && board[2] == board[4] && board[2] == board[6]) {
		return board[2];
	}
	//draw
	if (std::count(board.begin(), board.end(), 0) == 0) {
		return -1;
	}
	return 0;
}
