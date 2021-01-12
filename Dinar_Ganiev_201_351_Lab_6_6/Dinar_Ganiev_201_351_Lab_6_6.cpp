#include <iostream>
#include <string>
#include <map>
int main()
{
	setlocale(LC_ALL, "ru");
	std::string words;
	std::map<std::string, double> c_of_words;
	int sum = 0;
	std::cout << "Введите текст:" << std::endl;
	std::cin >> words;
	while (words != ".")// цикл подсчета общего количества слов
	{
		if (c_of_words.find(words) != c_of_words.end())
		{
			c_of_words[words]++;
		}
		else c_of_words[words] = 1;
		sum++;
	}
	std::cout << "Всего слов:" << sum << std::endl;
	std::cout << "Слово - частота" << std::endl;
	for (auto f : c_of_words)
	{
		std::cout << f.first << " - " << f.second * 100 / sum << "%" << std::endl;
	}
	return 0;
}
