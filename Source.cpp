#include <iostream>
using namespace std;
#include <array>

int main()
{
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
	return 0;




}