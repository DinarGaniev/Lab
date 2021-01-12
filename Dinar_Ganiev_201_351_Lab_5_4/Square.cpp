#include "Square.h"
#include<iostream>

Square::Square():Position()
{
	length = 0;
}

Square::Square(double x1, double y1, double length1) : Position(x1,y1)
{
	length = length1;
}

Square::~Square()
{
}

double Square::get_length()
{
	return length;
}

void Square::Len(double length1)
{
	length = length1;
}

std::istream& operator>>(std::istream& in, Square& leng)
{
	in >> leng.x;
	in >> leng.y;
	in >> leng.length;
	return in;
}

std::ostream& operator<<(std::ostream& out, Square& leng)
{
	out << leng.get_x();
	std::cout << ", ";
	out << leng.get_y();
	std::cout << ", ";
	out << leng.get_length();
	return out;
}
