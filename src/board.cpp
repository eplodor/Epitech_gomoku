#include "board.hpp"
#include "pawn.hpp"

Board::Board(const size_t size_x, const size_t size_y)
{
	this->board = boost::numeric::ublas::matrix<Pawn>(size_x, size_y);
}

Board::~Board()
{
}

void Board::display() const
{
	for (auto it = this->board.begin1() ; it != this->board.end1() ; it++) {
		for (auto it2 = this->board.begin2() ; it2 != this->board.end2() ; it2++)
			std::cout << *it2;
		std::cout << std::endl;
	}
}