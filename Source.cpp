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

	// Представляет собой реализацию "прокаченного" статического массива

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
	//Представляет собой реализацию двусторонней очереди - double-ended queue: list + vector - "скрещение динамического массива и двусвязного списка"


	deque<int> dq = { 1,2,3,4 };
	//Все методы уже рассмотрены при работе с предыдущими контейнерами list и vector
	

	cout << "3. ---		SET И MULTISET		---" << endl << endl;
	// Это упорядоченные ассоциативные контейнеры, основаны на принципе бинарного дерева

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
		cout << "Элемент найден!" << endl;
	}
	else
	{
		cout << "Элемент отсутствует" << endl;
	}

	cout << endl;
	mySet.erase(19999); // Удаление эл-та
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

	auto it1 = ms.upper_bound(1); // Возвращает следующий аргумент в коллекции - но не как мы внесли в списке инициализации, а следующий в бинарном дереве, в данном случае - 2
	auto it2 = ms.lower_bound(1); // Возвращает первый аргумент в коллекции

	auto a = ms.equal_range(2); // Возвращает соседние lower_bound и upper_bound 
	\





	cout << endl;


	cout << "4. ---		PAIR		---" << endl << endl;
	pair<int, string> p(1,"телефон"); // Пара - позволяет связать ключ и значение
	
	cout << p.first << endl;
	cout << p.second << endl;


	cout << "5. ---		MAP И MULTIMAP		---" << endl << endl;
	//Похоже на set, но хранят пары значений ключ-значение
	//Банирное дерево строится по ключу

	map<int, string> myMap;
	myMap.insert(make_pair(1, "ноутбук")); //Создает объект pair и перемещает в map
	myMap.insert( pair<int,string>(2, "телефон")); //Создает объект pair и перемещает в map

	myMap.emplace(3, "монитор"); //Создает pair сразу в map

	myMap.emplace(44, "клавиатура");

	auto itr = myMap.find(66); // Метод find работает точно так же как и для set

	auto itr2 = myMap.emplace(44, "мышка"); // Таким образом можно контролировать, удалось ли добавить элемент

	cout << myMap[44] << endl;

	myMap.erase(2); // Удаление эл-та

	// [] можно добавить эл-т или изменить значение для существующего
	//Метод at - можно изменить значение для существующего, если эл-та нет - вызовется исключение

	multimap<int, string> mp;
	mp.emplace(1, "Петя");
	mp.emplace(1, "Вася");
	mp.emplace(3, "Маша");

	//Для multimap отсутствуют оператор [] и метод at

	return 0;
}