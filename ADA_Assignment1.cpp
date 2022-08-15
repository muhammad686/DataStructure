#include<iostream>
#include<math.h>
#include<chrono>
#include <iomanip>
using namespace std;
using namespace std::chrono;

void cube_itreative(int n)
{
	auto start = high_resolution_clock::now();
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		//cout << "cube of [" << i << "] is: " << cube(i) << "";
		 int sofc=pow(i,3);
		 sum = sum + sofc;
	}
	
	cout << "sum of cubes of [" << n << "] numbers are   : " << sum <<endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "total time taken by program is      : " << duration.count() << " microsec" << endl;

}

void cube_recursive(int start_val, int n,int sum)
{
	auto start = high_resolution_clock::now();
	while (start_val <= n)
	{
		
		int i = pow(start_val,3);
		//cout << "cube of [" << start_val << "] is : " << i << endl;
		sum = sum + i;
		return cube_recursive(start_val + 1, n, sum);

	}
	cout << "sum of cubes of [" << n << "] numbers are  : " << sum << endl;
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << "total time taken by program is     : " << duration.count() << " microsec\n\n" << endl;

	}
int main()
{
	cout << "\t\tThrough Itreative approach:\n" << endl;
	cube_itreative(3000);
	cout << "Time Complexity of Itreative Solution is: " <<
			setw(35) << "T(n)= 1+ (n+1) + 1\n" <<
			setw(75) << "T(n) = n+3\n" <<
			setw(75) << "T(n) = n\n" <<
			setw(75) << "O(n)" << endl;
	cout << "\n\n";
	cout << "\t\tThrough Recursive approach:\n" << endl;
		cube_recursive(1,3000,0);
		cout << "Time Complexity of Recursive Solution is: " <<
			setw(35) << "T(n)= n+1(1+1+(n-1)+(n-2)+(n-3)+.....+1)\n" <<
			setw(75) << "T(n) = n(2+(n-1)+(n-2)+(n-3)+.....+1)\n" <<
			setw(75) << "T(n) = 2n +n(n-1)+(n-2)+(n-3)+.....+1\n" <<
			setw(75) << "T(n) = n(n-1)/2 + 2n\n" <<
			setw(75) << "T(n) = (n^2-n)/2 + 2n\n" <<
			setw(75) << "T(n) = O(n^2)\n" << endl;

	cout << "\t*Note: program crashes through recursive approach if n>3424" << endl;
}
