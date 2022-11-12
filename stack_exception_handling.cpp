//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//template <typename T>
//
//class stack
//{
//private:
//	T *data;
//	int n, top_indx;
//public:
//	stack(int s=10)
//	{
//		n = s;
//		top_indx = -1;
//		data = new T[n];
//	}
//	~stack()
//	{
//	  delete []data;
//	}
//	bool full() const
//	{
//		if (top_indx = n - 1)
//			return true;
//		else
//			return false;
//	}
//	bool empty() const
//	{
//		if (top_indx = -1)
//			return true;
//		else
//			return false;
//	}
//		void push(const T& val)
//	{
//			if (!top_indx == n - 1)
//			{
//				top_indx++;
//				data[top_indx] = val;
//			}
//			else
//				throw" stack overflow";
//	}
//		T top() const
//		{
//			/*top_indx = val;*/
//			return data[top_indx];
//		}
//		void pop()
//		{
//			top_indx--;
//			if (top_indx < 0)
//			{
//				throw "stack underflow";
//			}
//		}
//
//		/*void make_empty()
//		{
//			while (stack != empty())
//			{
//				pop();
//			}
//		}
//
//		void make_full()
//		{
//			while (stack != full())
//			{
//				push();
//			}
//		}*/
//
//
//};
//int main()
//{
//	int n, v;
//	cout << "enter size of stack: ";
//	cin >> n;
//	stack<int> s(n);
//
//	
//
//
//
//}