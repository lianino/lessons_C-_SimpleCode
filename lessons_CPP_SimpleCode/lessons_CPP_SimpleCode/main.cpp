#include<iostream>
#include<string>
#include <memory>
using namespace std;

//односвязный список

template<typename T>
class List
{
public:
	List();
	~List();

private:
	template<typename T>
	class Node
	{
	public:
		Node *pNext;
		T data;
		Node(T data = T(), Node *pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
	};
	Node<T> head;
};

template<typename T>
List<T>::List()
{
}

template<typename T>
List<T>::~List()
{
}


int main()
{
	setlocale(LC_ALL, "ru");
	

	system("pause");
	return 0;
}