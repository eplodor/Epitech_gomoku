#pragma once

#include <iostream>

class Pawn
{
public:
	size_t	x = 0;
	size_t	y = 0;
	size_t	id = 0;
	Pawn();
	~Pawn();
	void place(size_t x, size_t y, size_t id);
	friend std::ostream &operator<<(std::ostream &, const Pawn &);
};