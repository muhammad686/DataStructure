////#include<iostream>
////#include<string>
////#include<stack>
////using namespace std;
//////template <typename T>             // with template 
//////class stack {
//////private:
//////	T *data;
//////	int n, top_index;
//////public:
//////	stack(int size=10)
//////	{
//////		n = size;
//////		top_index = -1;
//////		data = new T[n];
//////	}
//////	~stack()
//////	{
//////		delete []data;
//////	}
//////	void push(const int &val)
//////	{
//////		top_index++;
//////		data[top_index] = val;
//////	}
//////	T top() const
//////	{
//////		//topi = val;
//////		return data[top_index];
//////	}
//////	void pop()
//////	{
//////		top_index--;
//////	}
//////	bool empty() const
//////	{
//////		if (top_index < 0)
//////		{
//////			return true;
//////		}
//////		else
//////			return false;
//////		/* return data[top_index] == -1;*/
//////	}
//////	bool full() const
//////	{
//////		return top_index == n - 1;
//////	}
//////	/*void make_empty()
//////	{
//////		for (int i = 0; i < n; i++)
//////		{
//////			pop();
//////		}
//////	}
//////	void make_full()
//////	{
//////		for (int i = 0; i < n; i++)
//////		{
//////			push();
//////		}
//////	}*/
//////
//////};
////int main()
////{
////	/*stack s;
////	s.push(5);
////	s.top();
////	s.empty();
////	s.pop();
////	s.make_empty();
////	int x = s.top();
////	return x;
////	*/
////	int n;
////	string v;
////	cout << "enter size of stack: ";
////	cin >> n;
////	stack<string> s;
////	
////	for (int i = 0; i < n; i++)
////	{
////		cout << "enter value: ";
////		cin >> v;
////		s.push(v);
////	}
////	s.push("abc");
////	//cout << "stack  is full!" << endl;
////	while (!s.empty())
////	{
////		//char v;
////		v = s.top();
////		//cout << v << endl;
////		s.pop();
////
////	}
////	cout << "stack  is empty!" << endl;
////
////}