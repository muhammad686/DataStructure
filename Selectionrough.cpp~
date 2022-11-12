#include <iostream>
using namespace std;

void swap(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;
}

void selection(int* a, int n)
{
	for (int i = 0; i <= n - 1; i++)
	{
		int min_indx = i;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[min_indx])
			{
				min_indx = j;
			}
		}
		swap(a[min_indx], a[i]);
	}
}

void display(int* a, int n)
{
	for (int i = 0; i <= n; i++)
	{
		cout << "  " << a[i] << endl;
	}
}
int main()
{

	int arr[] = { 12,2,3,4,5,43,8 };
	int n = sizeof(arr) / sizeof(arr[0]);
	selection(arr, n);

	cout << "sorted array is: ";
	display(arr, n);
}
