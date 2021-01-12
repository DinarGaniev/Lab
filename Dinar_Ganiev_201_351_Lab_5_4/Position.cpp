#include "Position.h"

Position::Position()
{
	x = 0;
	y = 0;
}

Position::Position(double x1, double y1)
{
	x = x1;
	y = y1;
}

Position::~Position()
{
}


void Position::Coordinats(double x1, double y1)
{
	x = x1;
	y = y1;

}

double Position::get_x()
{
	return x;
}

double Position::get_y()
{
	return y;
}

std::istream& operator>>(std::istream& in, Position& coord)
{
	in >> coord.x;
	in >> coord.y;
	return in;
}

std::ostream& operator<<(std::ostream& out, Position& coord)
{
	out << coord.get_x();
	std::cout << ", ";
	out << coord.get_y();
	return out;
}
