//#include<iostream>
//
//using namespace std;
//
//template <typename T>
//struct node {
//	T *data;
//	node *next;
//};
//template <typename T>
//class queue
//{
//private:
//	node<T> *r, *f;
//	
//public:
//	queue()
//	{
//		f = r = NULL;
//	}
//	void push(const T &val)
//	{
//		node<T> *temp;
//		
//		temp = new node<T>;
//		temp->data = val;
//		if (f == NULL)
//		{
//			f = r = temp;
//		}
//		else
//		{
//			//f->next = temp;
//			r->next = temp;
//			r = temp;
//		}
//	}
//	void pop()
//	{
//		node<T>* temp;
//		temp = new node<T>;
//
//		temp = f;
//		f = temp->next;
//		delete temp;
//	}
//	T front() const
//	{
//		return f->data;
//	}
//	bool empty()
//	{
//		return f = r = NULL;
//	}
//	bool full()
//	{
//		return r->next = NULL;
//	}
//	void make_empty()
//	{
//		while (!empty())
//		{
//			pop();
//		}
//	 }
//	void make_full()
//	{
//		while (!full())
//		{
//			push();
//		}
//	}
//
//};
//int main()
//{
//	queue<int> q;
//	q.push(3);
//	q.push(3);
//	q.push(3); 
//	q.push(3);
//	q.push(3);
//
//
//	return 0;
//}