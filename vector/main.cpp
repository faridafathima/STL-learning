#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "elements of array 1::" << endl;
	for (auto itr = v1.begin(); itr != v1.end(); itr++)
	{
		cout << *itr << endl;
	}

	v1.at(1) = 25;
	cout << "first element of vector1:" << v1.front() << endl;
	cout << "last element of vector1:" << v1.back() << endl;
	cout<<"capacity of vector1:"<<v1.capacity()<<endl;
	cout << "size of vector1:"<<v1.size()<<endl;
	cout << "max size of vector1:" << v1.max_size() << endl;
	cout << "whether vector 1 is empty or not"<<v1.empty()<<endl;

	vector<int> v2;
	v2.push_back(60);
	v2.push_back(70);
	v2.push_back(80);
	v2.push_back(90);
	v2.push_back(100);

	cout << "elements of array 2::" << endl;
	for (auto itr = v2.begin(); itr != v2.end(); itr++)
	{
		cout << *itr << endl;
	}

}