#include<iostream>
#include<vector>
using namespace std;

//���������� ����������� �������� (STL)
//VECTOR, ���������


int main()
{
	setlocale(LC_ALL, "ru");

	vector<int> myVector = {1,9,44,422,676,78};

	vector<int>::iterator it;

	it = myVector.begin(); //���������� �������� ������ �������, ������ �������

	//*it = 1000; // ��������� �������� ������� ��������, ������ ����� *

	/*it++;
	it += 2;
	it--;
	it -= 2;*/
	
	myVector.insert(it, 999); // ���������� ��������

	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	cout << endl;

	vector<int>::iterator itErase = myVector.begin();
	/*myVector.erase(itErase);// �������� ��������  
	
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	cout << endl;*/

	myVector.erase(itErase, itErase + 3); //�������� ���������

	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}
	
	//cout << *it << endl;

	//advance(it, 3); // ����� ��������� �� 3


	/*for (vector<int>::reverse_iterator i = myVector.rbegin(); i != myVector.rend(); i++)
	{
		cout << *i << endl;
	}*/

	//cout << myVector[1] << endl; // � ������� ���� � ��������� � ���������� []

	/*int arr[] = { 2,6,9 };

	cout << arr[1] << endl;

	cout << *(arr + 1) << endl; // ������ �� ������ � �����������, ���������� ����������*/
	

	system("pause");
	return 0;
}