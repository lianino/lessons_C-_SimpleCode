#include<iostream>
#include<string>
using namespace std;

//smart pointer

template<typename T>
class SmartPointer
{
public:
	SmartPointer(T *ptr)
	{
		this->ptr = ptr;
		cout << "Constructor SmartPointer" << endl;
	}

	~SmartPointer()
	{
		delete ptr;
		cout << "Destructor SmartPointer" << endl;
	}

	T& operator*()
	{
		return *ptr;
	}


private:
	T *ptr;

};


int main()
{
	setlocale(LC_ALL, "ru");
	
	SmartPointer<int> pointer = new int(5);
	cout << *pointer << endl;

	system("pause");

	return 0;
}