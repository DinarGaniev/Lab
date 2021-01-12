#pragma once
#include<iostream>
class matric
{
private:
	int cols; // ���������� ��������
	int rows; // ���������� �����
	double* elements; // ���������
public:
	matric();
	matric(int cols_in, int rows_in);// ���������� ������������ �� ���������
	matric(int cols_in, int rows_in, double* arr); //���������������� ������������
	~matric();
	void input();
	void print();
	double get_elements(int i, int j);
	bool sum(const matric* matric2);
	bool sum(const double* arr, int l_rows, int l_cols);
	void input(int rows_in, int cols_in);
	void input(int rows_in, int cols_in, double* arr);
	void mult_by_num(double num);
	bool mult(const matric* matric2);
	bool mult(const double* arr, int l_rows, int l_cols);
	int get_rows();
	int get_cols();
	double trace();
};

