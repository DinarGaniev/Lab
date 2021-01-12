#pragma once
#include<iostream>
class Position
{
protected:
	double x;
	double y;

public:
	Position();
	Position(double x1, double y1);
	~Position();
	void Coordinats(double x1, double y1);
	double get_x();
	double get_y();

	friend std::istream& operator>> (std::istream& in, Position& coord);
	friend std::ostream& operator<< (std::ostream& out, Position& coord);


};

