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

	/*myVector.pop_back();

	cout << "���������� ��������� � ������� " << myVector.size() << endl;
	
	for (int i = 0; i < myVector.size(); i++)
	{
		cout << myVector[i] << endl;
	}

	myVector.clear();*/
	system("pause");
	return 0;
}