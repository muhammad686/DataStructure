//#include <iostream>
//
//using namespace std;
//
//void func(int *&x)
//{
//	int* y;
//	y = new int;
//	*y = 10;
//	x = y;
//}
//int main()
//{
//	int* z;
//	z = new int;
//	*z = 5;
//	func(z);
//
//	cout << " " << *z << endl;
//}