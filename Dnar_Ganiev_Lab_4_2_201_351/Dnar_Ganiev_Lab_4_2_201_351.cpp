#include<locale>
#include <iostream>
#include<fstream>
#include<string>
using namespace std;
// D:\Ganiev_Dinar_201_351\FFFf.txt
void format(string file_path_full,string file_format)
{
	file_format = file_path_full.substr(file_path_full.rfind('.'));
	file_format = file_format.erase(0, 1);
	cout << "Расширение: " << file_format;
}
void name(string file_path_full, string file_name)
{
	file_name=file_path_full.substr(file_path_full.rfind('\\'));
	file_name = file_name.erase(file_name.find('.'));
	file_name = file_name.erase(0, 1);
	cout << "Имя: " << file_name;
}
void path(string file_path_full, string file_path) 
{
	file_path = file_path_full.substr(file_path_full.find('\\'));
	file_path = file_path.erase(file_path.rfind('\\'));
	cout << "Путь: " << file_path;
}
char F_disk(string file_path_full, char disk)
{
	disk = file_path_full[0];
	cout << "Диск: " << disk;
	return disk;
}
bool rename(string file_path_full)
{
	string file_rename;
	string format;
	string path;
	format = file_path_full.substr(file_path_full.rfind('.'));
	path = file_path_full.substr(file_path_full.find('\\'));
	path = path.erase(path.rfind('\\'));
	cout << "Введите новое имя ";
	cin >> file_rename;
	file_rename = path +'\\'+ file_rename + format;
	cout << "Новое имя: " << file_rename;
	return true;
}
string file_path_copy(string file_path_full)
{
	string copy;
	string format;
	format = file_path_full.substr(file_path_full.rfind('.'));
	copy = file_path_full;
	copy = copy + "_copy" + format;
	cout << copy;
	return copy;
}
bool file_copy(string file_path_full)
{
	ifstream in(file_path_full, ios_base::in);
	if (in.is_open())
	{
		ofstream out(file_path_copy(file_path_full), ios_base::out);
		string buf;
		getline(in, buf);
		out << buf;
		out.close();
		return true;
	}
	else
	{
		cout << "Файл не открылся";
		return false;
	}
}

int main()
{
	setlocale(LC_ALL, "ru");
	string file_format;
	string file_name;
	string file_path;
	string file_disk;
	const char* disk = file_disk.c_str(); // функция c.str() возвращает const char
	string file_path_full;
	cin >> file_path_full;
	int choice = 0;
	while (true)
	{
		cout << "\n1.Format"
			<< "\n2.Name"
			<< "\n3.Path"
			<< "\n4.Disk"
			<< "\n5.Rename"
			<< "\n6.Copy"
			<< "\n7.Выход";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			format(file_path_full, file_format);
			break;
		}
		case 2:
		{
			name(file_path_full, file_name);
			break;
		}
		case 3:
		{
			path(file_path_full, file_path);
			break;
		}
		case 4:
		{
			F_disk(file_path_full, *disk);
			break;
		}
		case 5:
		{
			rename(file_path_full);
			break;
		}
		case 6:
		{
			file_copy(file_path_full);
			break;
		}
		default:
		{
			return 0;
		}
		}
	}

}

