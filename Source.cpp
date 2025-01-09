#include <iostream>
using namespace std;
#include <array>
#include <deque>
#include <set>

int main()
{
	setlocale(LC_ALL, "ru");
	cout << "1. ---		ARRAY		---" << endl << endl;

	// ѕредставл€ет собой реализацию "прокаченного" статического массива

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



	cout << "1. ---		DEQUE		---" << endl << endl;
	//ѕредставл€ет собой реализацию двусторонней очереди - double-ended queue: list + vector - "скрещение динамического массива и двусв€зного списка"


	deque<int> dq = { 1,2,3,4 };
	//¬се методы уже рассмотрены при работе с предыдущими контейнерами list и vector
	

	cout << "2. ---		SET » MULTISET		---" << endl << endl;
	// Ёто упор€доченные ассоциативные контейнеры, основаны на принципе бинарного дерева

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
		cout << "Ёлемент найден!" << endl;
	}
	else
	{
		cout << "Ёлемент отсутствует" << endl;
	}

	cout << endl;
	mySet.erase(19999); // ”даление эл-та
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

	auto it1 = ms.upper_bound(1); // ¬озвращает следующий аргумент в коллекции - но не как мы внесли в списке инициализации, а следующий в бинарном дереве, в данном случае - 2
	auto it2 = ms.lower_bound(1); // ¬озвращает первый аргумент в коллекции

	auto a = ms.equal_range(2); // ¬озвращает соседние lower_bound и upper_bound 

	return 0;
}