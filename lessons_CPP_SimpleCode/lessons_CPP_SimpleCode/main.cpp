#include<iostream>
#include<vector>
using namespace std;

//Библиотека стандартных шаблонов (STL)
//VECTOR


int main()
{
	setlocale(LC_ALL, "ru");

	vector<int> myVector = {67,45,78,90};
	myVector.reserve(15);
	myVector.push_back(2);
	myVector.push_back(44);
	myVector.push_back(77);
	myVector.push_back(9);

	//cout << myVector.at(1) << endl;// доступ к элементу вектора с проверкой границы массива вотличии от использования []

	cout << "Количество элементов в векторе " << myVector.size() << endl;

	cout << "Capasity вектора " << myVector.capacity() << endl;// покажет кол-во элементов с запасом

	/*myVector.pop_back();

	cout << "Количество элементов в векторе " << myVector.size() << endl;
	
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	myVector.clear();*/
	system("pause");
	return 0;
}