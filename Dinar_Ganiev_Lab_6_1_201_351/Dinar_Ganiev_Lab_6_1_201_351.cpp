#include<iostream>
#include<string>
#include<stack>
int main()
{
	std::string str;
	std::cout << "Input str: \n";
	std::cin >> str;
	std::stack<char> strin;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '(' or str[i] == '[' or str[i] == '{')
		{
			strin.push(str[i]); // если встречается какая-либо скобка, то мы добавляем её в стек
		}
		if (str[i] == ')')
		{
			if (strin.empty())
			{
				std::cout << "NO";
				return 0;
			}
		}
		else if (str[i] == ')' and strin.top() == '(') { // встречена закрfывающая скобка, то проверяется верхушка стека, если там круглая скобка, то удаляем ее
			strin.pop();
		}
		else if (str[i] == ')' and strin.top() != '(') { // если последовательность неправильная, то работа программы завершается
			  std::cout <<"NO";
			  return 0;
		}
		if (str[i] == ']')
		{
			if (strin.empty())
			{
				std::cout << "NO";
				return 0;
			}
		}
		else if (str[i] == ']' and strin.top() == '[') {
			strin.pop();
		}
		else if (str[i] == ']' and strin.top() != '[') {
			   std::cout << "NO";
			   return 0;
		}
		if (str[i] == '}')
		{
			if (strin.empty())
			{
				std::cout << "NO";
				return 0;
			}
		}
		else if (str[i] == '}' and strin.top() == '{') {
			strin.pop();
		}
		else if (str[i] == '}' and strin.top() != '{') {
			  std::cout << "NO";
			  return 0;
		}
	}
	strin.empty() ? std::cout << "Yes" :
		std::cout << "No";
	return 0;
}

