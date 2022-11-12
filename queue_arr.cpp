//#include<iostream>
////#include<queue>
//using namespace std;
//
//template <typename T>
//class queue
//{
//private:
//	int r, f, n;
//	T* data;
//public:
//	queue(int size = 10)
//	{
//		n = size + 1;
//		r = f = 0;
//		data = new T[n];
//	}
//	~queue()
//	{
//		delete[]data;
//	}
//	void push(const T& val)
//	{
//		if (full())
//			throw("queue overflow");
//		r++;
//		data[r] = val;
//
//	}
//	void pop()
//	{
//		if (empty())
//			throw("queue underflow");
//		f++;
//		data[f] = (f + 1) % n;
//	}
//	T front() //const
//	{
//		if (empty())
//			throw("queue empty!");
//		return f = (f + 1) % n;
//		
//	}
//	bool empty() const
//
//	{
//		return r == f;
//	}
//	bool full() const
//	{
//		return (r + 1) % n == f;
//	}
//
//
//	void operator=(queue<T> const& src)
//	{
//		make_empty();
//		node<T>* tf;
//		tf = src.f;
//		if (tf != NULL)
//		{
//			push(tf->data);
//			tf = tf->next;
//		}
//
//	}
//
//
//};
//
//int main()
//{
//	queue<int> q;
//	int v;
//	q.push(1);
//	q.push(2);
//	q.push(3);
//	q.push(4);
//	try {
//		//q.push(5);
//	}
//	catch (const char* msg)
//	{
//		cout << msg << endl;
//	}
//	/*while (!q.empty())
//	{
//		v = q.front();
//		q.pop();
//		cout << "value: " << v << endl;
//	}*/
//	try {
//		//q.pop();
//	}
//	catch (const char* msg)
//	{
//		cout << msg << endl;
//	}
//	
//	queue<int> q2;
//
//	q2 = q;
//
//	while (!q2.empty())
//	{
//		v = q2.front();
//		q2.pop();
//		cout << v << " " << endl;
//	}
//	cout << endl;
//	while (!q.empty())
//	{
//		v = q.front();
//		q.pop();
//		cout << v << " " << endl;
//	}
//
//	return 0;
//}