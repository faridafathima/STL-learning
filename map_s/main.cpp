#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, int> m1;

	m1.insert({ 10, 100 });
	m1[4] = 400;
	m1[3] = 300;

	m1[7] = 700;
	m1[10] = 20;

	for (auto itr = m1.begin(); itr != m1.end(); itr++)
	{
		cout << itr->first << "\t" << itr->second << endl;
	}

	cin.get();
}