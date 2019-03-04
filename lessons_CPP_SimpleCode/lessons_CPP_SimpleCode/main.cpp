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

	myVector.shrink_to_fit(); // подчищает динамическую память, свободную.

	cout << "myVector.shrink_to_fit()" << endl;
	cout << "Количество элементов в векторе " << myVector.size() << endl;
	cout << "Capasity вектора " << myVector.capacity() << endl;

	vector<int> myVector2(10, 55); // (создание вектора с реальными ячейками 10, 55 значение которым заполняются все ячейки)

	//myVector.pop_back();

	cout << "Количество элементов в векторе " << myVector2.size() << endl;
	
	for (int i = 0; i < myVector2.size(); i++)
	{
		cout << myVector2[i] << endl;
	}

	myVector.clear();
	cout<< endl << myVector.empty() << endl;//проверка на пустоту, false 0 - это НЕ пустой
	cout << myVector2.empty() << endl << endl;
	myVector2.clear();

	myVector2.resize(20,1000); // пересоздание списка

	for (int i = 0; i < myVector2.size(); i++)
	{
		cout << myVector2[i] << endl;
	}

	//myVector2.insert(); вставка работают через итераторы
	//myVector2.erase(); удаление

	system("pause");
	return 0;
}