#include<iostream>
using namespace std;
#include<string>

template <typename T>
void bubble_sort(T *array,T n)
{
	T temp;
	for (T i=0;i<=n;i++)
	{
		for (T j=i+1;j<n;j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout<<"elements are:"<<endl;
	for (T i = 0; i < n; i++)
	{
		cout<<array[i]<<endl;
	}
}

int main()
{
	string a = "hello";
	int n;
	cout << "enter the number of elements to sort" << endl;
	cin >> n;
	int array[50];
	cout << "enter the element" << endl;
	for (int i=0;i<n;i++)
	{
		cin >> array[i];
	}
	bubble_sort(array,n);
}