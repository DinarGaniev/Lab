#include<iostream>
#include<deque>
#include<string>
/* void input(char* str)
{
	std::cout << "Введите строку";
	std::cin >> str;
}
void Pal(char* str) 
{
	std::deque<char>strl;

}
int main()
{
	setlocale(LC_ALL, "ru");
	int choice = 0;
	char str;
	while(true)
	{
		std::cout << "Введите номер:\n" <<
			"1.Палиндром\n" <<
			"2.Алгоритм Грэхема";
		std::cin >> choice;
		switch (choice) 
		{
		case 1:
		{
			break;
		}
		case 2:
		{
			break;
		}
		default:
		{
			return 0;
		}

		}
	
	}
}*/
int main()
{
	std::deque<char>dstr;
	char str[255];
	std::cout << "Input str" << std::endl;
	std::cin.getline(str, 255);
	int len;
	len = strlen(str);
	int j;
	for (int i = 0; i < len; i++)// Удаление пробелов в веденной строке
	{
		if (str[i] == ' ')
		{
			for (j = i; j < len; j++)
			{
				str[j] = str[j + 1];
			}
			len--;
		}
	}
	for (int i = 0; i < len; i++)//  Преобразование заглавных букв в прописные
	{
		if ((str[i] > 64) && (str[i] < 91))
		{
			str[i] += 32;
		}
	}
	for (int i = 0; i <= len; i++)// Добавление элементов
	{
		dstr.push_front(str[i]);
	}
	dstr.pop_front();
	for (int i = 0; i < len / 2; i++)// Проверка на палиндром
	{
		if (dstr.front() == dstr.back())
		{
			dstr.pop_front();
			dstr.pop_back();
		}
		else
		{
			std::cout << "NO" << std::endl;
		}
	}
	if (dstr.empty())
	{
		std::cout << "YES" << std::endl;
	}
}