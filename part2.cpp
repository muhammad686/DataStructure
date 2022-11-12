//#include <iostream>
//
//using namespace std;
//
//template <typename T>
//
//class part_two
//{
//private:
//	T *data;
//	int n, ti;
//
//public:
//
//	part_two(int s= 10)
//	{
//		data = new T[n];
//		n = s;
//		ti = -1;
//	}
//
//	void push(const T& str)
//	{
//		ti++;
//			data[ti] = str;
//	
//	}
//	T getdat()
//	{
//		return data[ti];
//	}
//
//
//
//};
//
//int main()
//{
//	part_two<string> p;
//
//	string x;
//	cout << "enter the string: ";
//	cin >> x;
//	p.push(x);
//	p.getdat();
//
//	cout << "get the equation: " << p.getdat() << endl;
//
//}