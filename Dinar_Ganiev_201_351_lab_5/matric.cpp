#include "matric.h"
matric::matric() 
{
	cols = 0;
	rows = 0;
	elements = nullptr;
}
matric::matric(int cols_in, int rows_in)
{
	cols = cols_in;
	rows = rows_in;
	elements = new double[rows * cols];
}
matric::matric(int cols_in, int rows_in, double* arr)
{
	cols = cols_in;
	rows = rows_in;
	elements = new double[rows * cols];
	for (int i = 0; i < cols * rows; i++) 
	{
		elements[i] = arr[i];
	}
}
matric::~matric()
{
	if (elements != nullptr)
		delete[] elements;
}
void matric::input()
{
	if (elements != nullptr)
		delete[] elements;
	std::cout << "Input number of cols";
	std::cin >> cols;
	std::cout << "Input number of rows";
	std::cin >> rows;
	elements = new double[rows * cols];
	std::cout << "Input elements";
	for (int i=0;i< rows * cols;i++)
	{
			std::cin >> elements[i];
	}
}
double matric::get_elements(int i, int j)
{
	return elements[i * cols + j];
}
void matric::print() {
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
			std::cout << get_elements(i, j) << "\t";
		std::cout << std::endl;
	}
}
bool matric::sum(const matric* matric2)
{
	if (rows != matric2->rows || cols != matric2->cols) {
		return false;
	}
	for (int i = 0; i < rows * cols; i++) {
		elements[i] = elements[i] + matric2->elements[i];
	}
	return true;
}
bool matric::sum(const double* arr, int l_rows, int l_cols)
{
	if (this->rows != l_rows || this->cols != l_cols) 
	{
		return false;
	}
	for (int i = 0; i < this->rows * this -> cols; i++) {
		this -> elements[i] = this -> elements[i] + arr[i];
	}
	return true;
}
void matric::input(int rows_in, int cols_in)
{
	if (elements != nullptr)
		delete[] elements;
	rows = rows_in;
	cols = cols_in;
	elements = new double[rows * cols];
	std::cout << "Input elements";
	for (int i = 0; i < rows * cols; i++)
	{
		std::cin >> elements[i];
	}
}

void matric::input(int rows_in, int cols_in, double* arr)
{
	if (elements != nullptr)
		delete[] elements;
	cols = cols_in;
	rows = rows_in;
	elements = new double[rows * cols];
	for (int i = 0; i < cols * rows; i++)
	{
		elements[i] = arr[i];
	}
}


void matric::mult_by_num(double num)
{
	std::cout << "\nMatric * num" << "\n";
	for (int i = 0; i < rows * cols; i++) {
		elements[i] = elements[i] * num;
	}
	
}

bool matric::mult(const matric* matric2)
{
	if (cols!=matric2->rows) // условие выполнения умножения матриц
	{
		return false;
	}
	for (int i = 0; i < rows; i++) 
	{
		for (int j = 0; j < matric2->cols; j++)
		{
			elements[i * matric2->cols + j] = 0;
			for (int l = 0; l < cols; l++)
			{
				elements[i * matric2->cols + j] += elements[i * cols + l] * matric2->elements[l * matric2->cols + j];
			}
		}
	}
	return true;
}

bool matric::mult(const double* arr, int l_rows, int l_cols)
{
	if (this -> rows != l_cols) // условие выполнения умножения матриц
	{
		return false;
	}
	for (int i = 0; i < this -> rows; i++)
	{
		for (int j = 0; j < l_cols; j++)
		{
			this->elements[i * cols + j] = 0;
			for (int l = 0; l <  l_cols; l++)
			{
				this->elements[i * l_cols + j] += this-> elements[i * this -> cols + l] *arr[l * l_cols + j];
			}
		}
	}
	return true;
}


int matric::get_rows()
{
	return rows;
}
int matric::get_cols()
{
	return cols;
}

double matric::trace()
{
	if (rows != cols) 
	{
		std::cout << "\nError";
		return 23;
	}
	double diag = 0;
	for (int i = 0; i < rows; i++) 
	{
		diag = diag + this->get_elements(i, i);
		std::cout << diag<<"\n";
	}
	return diag;
}



