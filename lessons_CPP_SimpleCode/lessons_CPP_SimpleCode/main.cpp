#include<iostream>
using namespace std;

//односв€зный список

template<typename T>
class List
{
public:
	List();
	~List();

	void pop_front();
	void push_back(T data);
	void clear();
	int GetSize() { return Size; };

	T& operator[](const int index);

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
	int Size;
	Node<T> *head;
};

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	clear();
}

template<typename T>
void List<T>::pop_front()
{
	Node<T> *temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
void List<T>::push_back(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data);
	}
	else
	{
		Node<T> *current = this->head;
		while(current->pNext != nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node<T>(data);
	}
	Size++;
}

template<typename T>
void List<T>::clear()
{
	while (Size)
	{
		pop_front();
	}
}

template<typename T>
T & List<T>::operator[](const int index)
{
	int counter = 0;
	Node<T> *current = this->head;
	while (current != nullptr)
	{
		if (counter == index)
		{
			return current->data;
		}
		current = current->pNext;
		counter++;
	}
}



int main()
{
	setlocale(LC_ALL, "ru");

	List<int> lst;
	lst.push_back(55);
	lst.push_back(11);
	lst.push_back(2);

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << endl << "Ёлементов в списке " << lst.GetSize() << endl << "выполн€ю метод clear" << endl << endl;

	lst.clear();

	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}

	cout << "Ёлементов в списке " << lst.GetSize() << endl;

	system("pause");
	return 0;
}