//#include <iostream>
//using namespace std;
//
//bool linearsearch(int x, int arr[], int size)
//{
//	long steps = 0;
//	for (int i = 0; i <= size; i++)
//	{
//		steps++;
//		if (arr[i] == x)
//		{ 
//			cout << "steps: " << steps << ": ";
//			return true;
//		}
//	}
//	cout << "steps: " << steps << ": ";
//	return false;
//	
//}
//bool binarysearch(int x, int arr[], int size)
//{
//	int start = 0;
//	int end = size - 1;
//	int mid;
//	long steps = 0;
//	while (start <= end)
//	{
//		mid = (start + end) / 2;
//		//cout << "mid value: " << mid << endl;
//			if(x==arr[mid])
//			{
//				cout << "steps: " << steps<<": ";
//				return true;
//			}
//		//else
//			if (x < arr[mid])
//			
//				end = mid - 1;
//				//cout << "end value is: " <<end<< endl;
//
//		else
//			//if (x > arr[mid])
//			
//				start = mid + 1;
//				//cout << "start value is: " << start << endl;
//			
//	}
//	cout << "steps: " << steps << ": ";
//	return false;
//}
//int main()
//{
//	int n; 
//	int* a;
//	n = 100000;
//	a = new int[n];
//	for (int i = 0; i <= n; i++)
//	{
//		a[i] = i *2;
//	}
//
//	cout << "linear result is: " << linearsearch(180000, a, n);
//	cout << endl;
//	cout << "binary result is: " << binarysearch(180001,a,n);
//	cout << endl;
//	cout << "linear result is: " << linearsearch(180001, a, n);
//	cout << endl;
//	cout << "binary result is: " << binarysearch(180000, a, n);
//	
//}