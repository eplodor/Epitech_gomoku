#include <iostream>
#include "pawn.hpp"

Pawn::Pawn()
{
}

Pawn::~Pawn()
{
}

void	Pawn::place(size_t x, size_t y, size_t id)
{
	this->x = x;
	this->y = y;
	this->id = id;
}

std::ostream	&operator<<(std::ostream &os, const Pawn &p)
{
	os << p.id;
	return os;
}