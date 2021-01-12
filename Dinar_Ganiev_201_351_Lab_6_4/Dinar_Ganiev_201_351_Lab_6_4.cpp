#include <iostream>
#include <set>
#include <string>
#include <vector>

int main()
{
	std::set<std::string> logs;
	std::vector<std::string> logs_mark;
	int num;
	int size = 0;
	std::string mark;// оценка студента 
	std::string log;// номер студента

	std::cout << "Input number of students" << std::endl;
	std::cin >> num;
	for (int i = 0; i < num; i++)
	{
		std::cin >> log >> mark;
		logs.insert(log);
		if (logs.size() > size)// Условие, при котором будет сфомирована оценка
		{
			logs_mark.push_back(log + " - " + mark);
		}
		size = logs.size();
	}
	std::cout << "Log - Mark" << std::endl;
	for (int i = 0; i < logs_mark.size(); i++)// Цикл вывода номера студента и его оценки
	{
		std::cout << logs_mark[i] << std::endl;
	}

}



