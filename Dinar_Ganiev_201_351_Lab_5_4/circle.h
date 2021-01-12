#pragma once
#include "Position.h"
class circle :
    public Position
{
protected:
    double rad;
public:
    circle();
    circle(double x1, double y1, double rad1);
    ~circle();

    double get_rad();
    void RAD(double rad1);

    friend std::istream& operator>> (std::istream& in, circle& rd);
    friend std::ostream& operator<< (std::ostream& out, circle& rd);
};

