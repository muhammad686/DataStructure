//#include <iostream>
//
//using namespace std;
//template<typename T>
//void reheapDown(T data[], int first, int last)
//{
//	int left, right, max;
//	left = (first * 2) + 1;
//	right = (first * 2) + 2;
//	max = left; //asssume, if left child doesn't exist right wouldn't be too.
//	if (left <= last)
//	{
//		if (right <= last && data[right] > data[left])
//		{
//			max = right;
//		}
//		if (data[first] < data[max])
//		{
//			swap(data[first], data[max]);
//			reheapDown(data, max, last);
//		}
//
//	}
//
//
//}
//template<typename T>
//void display(T data[], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		cout << data[i] << "  ";
//	}
//	cout << endl;
//}
//template<typename T>
//void sort(T data[], int n)
//{
//	//convert the array into heap
//	//n/2log(n)
//	display(data, n);
//	for (int i = n / 2 - 1; i >= 0; i--)
//	{
//		reheapDown(data, i, n - 1);
//	}
//	//swap data[0] with data[last_index]
//	//exclude the value at data[last_index] from heap
//	//Remove voilations from downwards from index data[0]
//	display(data, n);
//	for (int i = n - 1; i > 0; i--)
//	{
//		swap(data[0], data[i]);
//		reheapDown(data, 0, i - 1);
//	}
//	display(data, n);
//}
//int main()
//{
//	int data[] = {12,34,23,43,12,32,22,2,1,35,5};
//	int n = 11;
//	sort(data, n);
//
//}