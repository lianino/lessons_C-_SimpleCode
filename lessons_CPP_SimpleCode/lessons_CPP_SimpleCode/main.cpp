#include<iostream>
#include<string>
#include <memory>
using namespace std;

//smart pointer
// два указателя ссылаются на одну и туже память
//auto_ptr устарел
//unique_ptr уникальный
//shared_ptr общий


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
	
	/*auto_ptr<int> ap1(new int(5));
	auto_ptr<int> ap2(ap1);*/

	/*unique_ptr<int> p1(new int(5));
	unique_ptr<int> p2;
	p2 = move(p1);
	p1.swap(p2);
	int *p = p1.get();
	//p1.release(); // clear pointer
	p1.reset();// clear pointer amd memory*/

	shared_ptr<int> p1(new int(5));
	shared_ptr<int> p2(p1);

	system("pause");
	return 0;
}