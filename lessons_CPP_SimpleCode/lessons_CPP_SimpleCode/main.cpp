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

template<typename T>
class TypeSize
{
public:

	TypeSize(T value)
	{
		this->value = value;
	}

	void DataTypeSize()
	{
		cout << "value " << sizeof(value) << endl;
	}
	
protected:
	T value;
};


template<typename T>
class TypeInfo : public TypeSize<T>
{
public:
	TypeInfo(T value) : TypeSize<T>(value)
	{
		
	}

	void ShowTypeName()
	{
		cout << "Название типа " << typeid(this->value).name() << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "ru");
	double var = 5.75;
	
	TypeInfo<double> typeinfo(var);
	typeinfo.DataTypeSize();
	typeinfo.ShowTypeName();

	system("pause");
	return 0;
}