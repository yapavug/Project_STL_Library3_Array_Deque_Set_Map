#include <iostream>
using namespace std;
#include <array>
#include <deque>
#include <set>
#include <map>
#include <string>

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "1. ---		ARRAY		---" << endl << endl;

	// ������������ ����� ���������� "������������" ������������ �������

	array<int, 4> arr = {1,2,3,4};

	cout << arr.at(0) << endl << endl;

	//try
	//{
	//	cout << arr.at(11) << endl;
	//}
	//catch (const std::exception& ex)
	//{
	//	cout << ex.what() << endl;
	//}

	for (auto i : arr)
	{
		cout << i << endl;
	}
	cout << endl;
	//arr.fill(-1);

	for (auto i : arr)
	{
		cout << i << endl;
	}
	cout << endl;
	cout << arr.front() << endl;
	cout << endl;
	cout << arr.back() << endl;



	cout << "2. ---		DEQUE		---" << endl << endl;
	//������������ ����� ���������� ������������ ������� - double-ended queue: list + vector - "��������� ������������� ������� � ����������� ������"


	deque<int> dq = { 1,2,3,4 };
	//��� ������ ��� ����������� ��� ������ � ����������� ������������ list � vector
	

	cout << "3. ---		SET � MULTISET		---" << endl << endl;
	// ��� ������������� ������������� ����������, �������� �� �������� ��������� ������

	set<int> mySet;
	mySet.insert(5);
	mySet.insert(20);
	mySet.insert(12);
	mySet.insert(4);


	for (auto i : mySet)
	{
		cout << i << endl;
	}
	cout << endl;

	auto iset = mySet.find(4);
	if (iset != mySet.end())
	{
		cout << "������� ������!" << endl;
	}
	else
	{
		cout << "������� �����������" << endl;
	}

	cout << endl;
	mySet.erase(19999); // �������� ��-��
	for (auto i : mySet)
	{
		cout << i << endl;
	}
	cout << endl;



	multiset<int> ms = { 1,2,3,4,6,200,-3,2,1 };
	cout << endl;
	for (auto i : ms)
	{
		cout << i << endl;
	}
	cout << endl;

	auto it1 = ms.upper_bound(1); // ���������� ��������� �������� � ��������� - �� �� ��� �� ������ � ������ �������������, � ��������� � �������� ������, � ������ ������ - 2
	auto it2 = ms.lower_bound(1); // ���������� ������ �������� � ���������

	auto a = ms.equal_range(2); // ���������� �������� lower_bound � upper_bound 
	\





	cout << endl;


	cout << "4. ---		PAIR		---" << endl << endl;
	pair<int, string> p(1,"�������"); // ���� - ��������� ������� ���� � ��������
	
	cout << p.first << endl;
	cout << p.second << endl;


	cout << "5. ---		MAP � MULTIMAP		---" << endl << endl;
	//������ �� set, �� ������ ���� �������� ����-��������
	//�������� ������ �������� �� �����

	map<int, string> myMap;
	myMap.insert(make_pair(1, "�������")); //������� ������ pair � ���������� � map
	myMap.insert( pair<int,string>(2, "�������")); //������� ������ pair � ���������� � map

	myMap.emplace(3, "�������"); //������� pair ����� � map

	myMap.emplace(44, "����������");

	auto itr = myMap.find(66); // ����� find �������� ����� ��� �� ��� � ��� set

	auto itr2 = myMap.emplace(44, "�����"); // ����� ������� ����� ��������������, ������� �� �������� �������

	cout << myMap[44] << endl;

	myMap.erase(2); // �������� ��-��

	// [] ����� �������� ��-� ��� �������� �������� ��� �������������
	//����� at - ����� �������� �������� ��� �������������, ���� ��-�� ��� - ��������� ����������

	multimap<int, string> mp;
	mp.emplace(1, "����");
	mp.emplace(1, "����");
	mp.emplace(3, "����");

	//��� multimap ����������� �������� [] � ����� at

	return 0;
}