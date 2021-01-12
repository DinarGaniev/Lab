#include <iostream>
#include"Position.h"
#include"Square.h"

int main()
{
	Square A;
	Square B;
	Position F;
	F.Coordinats(23, 56);
	std::cout << F<<'\n';
	B.Coordinats(23, 47);
	B.Len(23);
	std::cout << B;
	Position co;
	std::cin >> co;
	std::cout << co;
	std::cin >> A;
	std::cout << A;

	return 0;
}


