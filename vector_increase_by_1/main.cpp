#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int array[] = { 9,9,9};
	vector<int> result;
	int size_array = ((sizeof(array)) / (sizeof(int))) - 1;;
	int carry = 1;
	int sum=0;
	cout << "size of array:" << size_array << endl;
	for (int index = size_array; index >= 0; index--)
	{
		sum = array[index] + carry;
		cout << "sum is" << sum << endl;

		if (sum == 10)
		{
			result.push_back(sum%10);
			carry = 1;
		}
		else
		{
			result.push_back(sum);
			carry = 0;
		}
	}
	if (carry == 1)
	{
		result.push_back(carry);
		carry = 0;
	}
	for(int index = result.size()-1; index >= 0; index--)
	{
		cout << "vector values are" << result[index] << endl;
	}

	cin.get();
} 