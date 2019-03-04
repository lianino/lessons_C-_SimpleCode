#include<iostream>
#include<vector>
using namespace std;

//Библиотека стандартных шаблонов (STL)
//VECTOR, итераторы


int main()
{
	setlocale(LC_ALL, "ru");

	vector<int> myVector = {1,9,44,422,676,78};

	vector<int>::iterator it;

	it = myVector.begin(); //возвращает итератор начала вектора, первый элемент

	//*it = 1000; // изменение значение первого элемента, только через *

	/*it++;
	it += 2;
	it--;
	it -= 2;*/
	
	myVector.insert(it, 999); // добавление элемента

	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	cout << endl;

	vector<int>::iterator itErase = myVector.begin();
	/*myVector.erase(itErase);// удаление элемента  
	
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	cout << endl;*/

	myVector.erase(itErase, itErase + 3); //удаление диапазона

	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	
	//cout << *it << endl;

	//advance(it, 3); // сдвиг итератора на 3


	/*for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
	{
		cout << *i << endl;
	}*/

	//cout << myVector[1] << endl; // у вектора есть и итераторы и перегрузка []

	/*int arr[] = { 2,6,9 };

	cout << arr[1] << endl;

	cout << *(arr + 1) << endl; // похоже на работу с итераторами, арифметика указателей*/
	

	system("pause");
	return 0;
}