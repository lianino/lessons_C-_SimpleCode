#include<iostream>
using namespace std;

//шаблоны классов, наследование шаблонных классов

class Point
{
public:
	Point()
	{
		this->x = 0;
		this->y = 0;
		this->z = 0;
	}

	Point(int x, int y, int z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

private:
	int x, y, z;
};

template<class T1>
class TypeSize
{
public:

	TypeSize(T1 value)
	{
		this->value = value;
	}

	void DataTypeSize()
	{
		cout << "value " << sizeof(value) << endl;
	}
	
private:
	T1 value;
};


template<class T1>
class TypeInfo
{
public:
	TypeInfo(T1 value) : TypeSize(value)
	{

	}
	

private:
	T1 value;
};






int main()
{
	setlocale(LC_ALL, "ru");

	double var = 5.75;
	TypeSize<double> typesize(var);
	typesize.DataTypeSize();
	
	TypeInfo<double> typeinfo(var);
	

	system("pause");
	return 0;
}