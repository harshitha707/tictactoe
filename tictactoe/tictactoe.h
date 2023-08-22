#pragma once
#include <array>
#include "game.h"

class tictactoe : public game {
public:
	void start() override;
	void stop() override;
protected:
	void update() override;
private:
	std::array<int, 9> board{};
	enum piece {X = 1, O = 2};
	void place(int pos, piece p);
	int check();
	piece turn = piece::X;
};


