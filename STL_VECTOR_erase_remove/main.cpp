#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	v1.push_back(60);

	v1.erase(v1.begin()+3, v1.end()-2);
	remove(v1.begin(), v1.end(), 40);
	cout << "elements are:" << endl;
	for (auto it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << endl;
	}
	cin.get();
}