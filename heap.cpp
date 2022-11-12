//#include <iostream>
//
//using namespace std;
//template<typename T>
//class heap
//{
//private:
//	T* data;
//	int size, fin, lin;
//public:
//	heap(int s= 100)
//	{
//		size = s;
//		data = new T[size];
//		lin = -1;
//		fin = 0;
//	}
//	~heap()
//	{
//		delete[]data;
//	}
//	void swap(T& x, T& y)
//	{
//		T z;
//		z = x;
//		x = y;
//		y = z;
//	}
//	void reheapUp(T data[], int f, int l)
//	{
//		int parent = (l - 1) / 2;
//		if (l > parent)
//		{
//			if (data[l] > data[parent])
//			{
//				swap(data[l], data[parent]);
//				reheapUp(data, f, l);
//			}
//		}
//	}
//	void push(const T& val)
//	{
//		if (full())
//		{
//			throw("queue is full");
//		}
//		lin++;
//		data[lin] = val;
//		reheapUp(data, fin, lin);
//
//	}
//	bool empty()
//	{
//		return lin == -1;
//	}
//	bool full()
//	{
//		return lin == size - 1;
//	}
//	T top()
//	{
//	
//		return data[fin];
//	}
//	bool last() 
//	{
//		return data[lin];
//	}
//	T Size()
//	{
//		return lin + 1;
//	}
//	void reheapDown(T data[], int first, int last)
//	{
//		int left, right, max;
//		left = (first * 2) + 1;
//		right = (first * 2) + 2;
//		max = left; //asssume, if left child doesn't exist right wouldn't be too.
//		if (left <= last)
//		{
//			if (right <= last && data[right] > data[left])
//			{
//				max = right;
//			}
//			if (data[first] < data[max])
//			{
//				swap(data[first], data[max]);
//				reheapDown(data, max, last);
//			}
//
//		}
//
//
//	}
//	void pop()
//	{
//		data[fin] = data[lin];
//		lin--;
//		reheapDown(data, fin, lin);
//	}
//
//};
//int main()
//{
//	heap<int> h(10);
//	try 
//	{
//		h.push(20);
//		h.push(10);
//		h.push(7);
//		h.push(2);
//		h.push(5);
//		h.push(3);
//	}
//	
//	catch (const char* msg)
//	{
//		cout << msg << endl;
//	}
//	cout << "size of heap is: " << h.Size() << endl;
//	cout << "top of heap is: " << h.top() << endl;
//	cout << "full of heap is: " << h.full() << endl;
//	cout << "last value of heap is: " << h.last() << endl;
//
//	while (!h.empty())
//	{
//			cout << " " << h.top() << endl;
//			h.pop();
//	}
//	cout << endl;
//	
//
//
//}