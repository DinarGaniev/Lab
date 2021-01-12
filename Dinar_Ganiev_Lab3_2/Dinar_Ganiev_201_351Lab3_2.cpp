#include <iostream>
#include <locale>
using namespace std;

void  inputArray(int*& arr, int* len)
{
	if (arr != nullptr) delete[]arr;
	cout << "Введите длину массива";
	cin >> *len;
	arr = new int[*len];
	for (int i = 0; i < *len; i++) {
		cin >> arr[i];
	}


}
void printArray(int *arr,const int len)
{
	for (int i = 0; i < len; i++) {
		cout << arr[i]<< '\t';
	}
}
int  sum (int number)
{
	int sum_n=0;
	while (number > 0)
	{
		number = number / 10; // отбрасываем нечётный разряд
		sum_n = sum_n + number % 10;// сложение цифры чётного разряда
		number = number / 10; // отбрасываем чётный пазряд
	}
	return sum_n;
}
void Z3(int* arr, const int len)	
{
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (sum(arr[j]) > sum(arr[j + 1])) {
				int f = 0;
				f = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = f;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		cout << arr[i]<< '\t';
	}
}


void Z4(int* V,const int nu) 
{
	int d = 0;
	for (int l = 0; l < nu; l++)
	{
		for (int ja = 0; ja < nu - l - 1; ja++) 
		{
			if (V[ja] % 10 == V[ja + 1] % 10) {
				if (V[ja] < V[ja + 1] ) {
					d = V[ja];
					V[ja] = V[ja + 1];
					V[ja + 1] = d;
				}
			}

			else 
			{
				if (V[ja] % 10 > V[ja + 1] % 10) {
					d = V[ja];
					V[ja] = V[ja + 1];
					V[ja + 1] = d;
				}
			}
		}
	}
	for (int l = 0; l < nu; l++) {
		cout << V[l] << '\t';
	}
}
int main() 
{
	setlocale(LC_ALL, "ru");
	int len =0 ;
	int* arr = nullptr;
	int choice = 0;
	while (true) 
	{
		cout << "\nЧто вы хотите ввести?"
			<< "\n1.Ввод массива"
			<< "\n2.Вывод массива"
			<< "\n3.Задание 3"
			<< "\n4.Задание 4"
			<< "\n5.Выход";
		cin >> choice;
		switch (choice) 
		{
		case 1:
		{
			inputArray(arr, &len);
		    break;
		}
		case 2:
		{

			printArray(arr, len);
			break;
		}
		case 3:
		{
			Z3(arr, len);

			break;
		}
		case 4:
		{
			Z4(arr, len);
			break;
		}
		default:
		{
			return 0;
		}
		}

	}

}
