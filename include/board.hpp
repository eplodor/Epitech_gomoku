#pragma once

#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>
#include "pawn.hpp"

class Board
{
public:
	Board(size_t size_x, size_t size_y);
	~Board();
	boost::numeric::ublas::matrix<Pawn>	board;
	void display() const;
};