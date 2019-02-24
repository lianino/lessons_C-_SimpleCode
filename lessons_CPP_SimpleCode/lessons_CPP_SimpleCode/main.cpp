#include<iostream>
#include<string>
using namespace std;

//������������� �������� ������

template<typename T>
class Printer
{
public:

	void Print(T value)
	{
		cout << value << endl;
	}
};

//������������� ��������
template<>
class Printer<string>
{
public:
	void Print(string value)
	{
		cout << "***" << value << "***" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "ru");
	
	Printer<string> p;
	p.Print("Hello World!");


	system("pause");
	return 0;
}