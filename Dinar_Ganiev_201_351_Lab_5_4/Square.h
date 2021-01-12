#pragma once
#include "Position.h"
class Square :
    public Position
{
protected:
    double length;
public:
    Square();
    Square(double x1, double y1, double length1);
    ~Square();

    double get_length();
    void Len(double length1);

    friend std::istream& operator>> (std::istream& in, Square& leng);
    friend std::ostream& operator<< (std::ostream& out, Square& leng);

};

