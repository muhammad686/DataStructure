//#include <iostream>
//
//using namespace std;
//
//template<typename T>
//class pririoty_queue
//{
//private:
//	T* array;
//	int ln, size;
//public:
//	pririoty_queue(int s = 20 )
//	{
//		size = s;
//		array = new T[size];
//		ln = -1;
//	}
//	~pririoty_queue()
//	{
//		delete[]array;
//	}
//	void swap(T& a, T& b)
//	{
//		T temp;
//		temp = a;
//		a = b;
//		b = temp;
//	}
//
//	void reheapUp(T arr[], /*int first,*/ int last)
//	{
//		// new node is stored in arr[last]
//		int parent;
//		parent = (last - 1) / 2;
//		if (last > parent)
//		{
//			if (arr[last] > arr[parent])
//			{
//				swap(arr[last], arr[parent]);
//				reheapUp(arr,/* first,*/ parent);
//			}
//		}
//	}
//	void push(const T& val)
//	{
//		ln++;
//		array[ln] = val;
//		reheapUp(array,/* 0,*/ ln);
//	}
//	bool empty()
//	{
//		return ln = -1;
//	}
//	bool full() const
//	{
//		return ln == size - 1;
//	}
//	int Size() 
//	{
//		return ln + 1;
//	}
//	void make_empty()
//	{
//		ln = -1;
//	}
//	T top() const
//	{
//		return array[0];
//	}
//
//};
//int main()
//{
//	pririoty_queue<int> p(20);
//	p.push(7);
//	p.push(17);
//	p.push(37);
//	p.push(8);
//	p.push(3);
//	p.push(4);
//	p.push(2);
//	p.push(54);
//	p.push(56);
//	p.push(78);
//}