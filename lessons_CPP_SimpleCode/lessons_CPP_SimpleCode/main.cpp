#include<iostream>
#include<vector>
using namespace std;

//���������� ����������� �������� (STL)
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

	//cout << myVector.at(1) << endl;// ������ � �������� ������� � ��������� ������� ������� �������� �� ������������� []

	cout << "���������� ��������� � ������� " << myVector.size() << endl;

	cout << "Capasity ������� " << myVector.capacity() << endl;// ������� ���-�� ��������� � �������

	myVector.shrink_to_fit(); // ��������� ������������ ������, ���������.

	cout << "myVector.shrink_to_fit()" << endl;
	cout << "���������� ��������� � ������� " << myVector.size() << endl;
	cout << "Capasity ������� " << myVector.capacity() << endl;

	vector<int> myVector2(10, 55); // (�������� ������� � ��������� �������� 10, 55 �������� ������� ����������� ��� ������)

	//myVector.pop_back();

	cout << "���������� ��������� � ������� " << myVector2.size() << endl;
	
	for (int i = 0; i < myVector2.size(); i++)
	{
		cout << myVector2[i] << endl;
	}

	myVector.clear();
	cout<< endl << myVector.empty() << endl;//�������� �� �������, false 0 - ��� �� ������
	cout << myVector2.empty() << endl << endl;
	myVector2.clear();

	myVector2.resize(20,1000); // ������������ ������

	for (int i = 0; i < myVector2.size(); i++)
	{
		cout << myVector2[i] << endl;
	}

	//myVector2.insert(); ������� �������� ����� ���������
	//myVector2.erase(); ��������

	system("pause");
	return 0;
}