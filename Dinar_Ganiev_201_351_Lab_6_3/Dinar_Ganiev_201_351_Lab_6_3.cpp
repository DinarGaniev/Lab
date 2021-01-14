
#include <iostream>
#include <queue>
int min(int a1, int a2, int a3)// функция поиска минимального значения от трех элементов
{
	if ((a1 <= a2) and (a1 <= a3))
	{
		return a1;
	}
	if ((a2 <= a1) and (a2 <= a3))
	{
		return a2;
	}
	if ((a3 <= a2) and (a3 <= a1))
	{
		return a3;
	}
}
int main()
{
	int element = 1;
	int n;
	std::queue<int> q2, q3, q5;
	std::cout << "Input n" << std::endl;
	std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cout << element << std::endl;
		q2.push(element * 2);
		q3.push(element * 3);
		q5.push(element * 5);
		element = min(q2.front(), q3.front(), q5.front());
		if (q2.front() == element)
		{
			q2.pop();
		}
		if (q3.front() == element)
		{
			q3.pop();
		}
		if (q5.front() == element)
		{
			q5.pop();
		}
	}
}
