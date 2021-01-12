
#include <iostream>
#include <queue>
bool Proverka(int num)
{
	if (num % 2 == 0 || num % 3 == 0 || num % 5 == 0)
	{
		return true;
	}
	else return false;
}
int main()
{
	std::queue<int>q1;
	int n;
	std::cin >> n;
	int i = 1;

	while (q1.size() < n) // цикл добавления элементов в queue
	{
		i++;
		if (Proverka(i)) //условие добавления элементов в queue
		{
			q1.push(i);
		}
	}
	while (!q1.empty())
	{
		std::cout << q1.front()<< std::endl;
		q1.pop();
	}
}
