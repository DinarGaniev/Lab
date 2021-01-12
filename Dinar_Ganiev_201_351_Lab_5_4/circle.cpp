#include "circle.h"

circle::circle():Position()
{
	rad = 0;
}

circle::circle(double x1, double y1, double rad1):Position(x1,y1)
{
	rad = rad1;
}

circle::~circle()
{
}

double circle::get_rad()
{
	return rad;
}

void circle::RAD(double rad1)
{
	rad = rad1;
}

std::istream& operator>>(std::istream& in, circle& rd)
{
	in >> rd.x;
	in >> rd.y;
	in >> rd.rad;
	return in;
	// TODO: вставьте здесь оператор return
}

std::ostream& operator<<(std::ostream& out, circle& rd)
{
	out << rd.get_x();
	std::cout << ", ";
	out << rd.get_y();
	std::cout << ", ";
	out << rd.get_rad();
	return out;
	// TODO: вставьте здесь оператор return
}
