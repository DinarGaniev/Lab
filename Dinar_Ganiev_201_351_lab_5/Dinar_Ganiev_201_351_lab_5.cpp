#include <iostream>
#include "matric.h"

int main()
{
	matric A;
	matric B;
	double r[9] = { 12, 34, 56, 78, 2, 17, 70, 24, 66 };
	matric C(3, 3, r);
	double s[9] = { 2, 2, 2, 2, 2, 17, 2, 2, 2 };
	matric C1(3, 3, s);
	int choice = 0;
	while (true) {
		std::cout << "\n1.Input 1"
			<<"\n2.Input 2"
			<< "\n3.Print"
			<< "\n4.Sum"
			<< "\n5.*(double num)"
			<< "\n6.Mult"
			<< "\n7.Trace";
		std::cin >> choice;
		switch (choice)
		{
		case 1: 
		{
			A.input();
			break;
		}
		case 2: 
		{
			B.input();
			break;
		}
		case 3:
		{
			std::cout << "A=" << "\n";
			A.print();
			std::cout << "B=" << "\n";
			B.print();
			C.print();
			break;
		}
		case 4:
		{
			A.sum(&B);
			C.sum(s,3,3);
			std::cout << "A+B=" << "\n";
			A.print();
			C.print();
			break;
		}
		case 5: 
		{
			double k;
			std::cout << "\nInput double number ";
			std::cin >> k;
			A.mult_by_num(k);
			A.print();
			break;
		}
		case 6: 
		{
			A.mult(&B);
			C.mult(s, 3, 3);
			A.print();
			C.print();
			break;
		}
		case 7:
		{
			A.trace();
			break;
		}


		default:
			return 0;
		}
	}
}
