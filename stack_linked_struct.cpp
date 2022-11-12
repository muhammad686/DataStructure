//#include<iostream>
//
//using namespace std;
//template <typename T>
//struct node
//{
//	T data; // hold the value of that node
//	node<T> *next; // hold the address of next node
//};
//
//template <typename T>
//
//class stacck
//{
//private:
//	node<T> *top_ptr; // will hold the address of top node
//public:
//	stacck()
//	{
//		top_ptr = NULL;
//	}
//	void push(const T& val)
//	{
//		node<T> *temp;
//		temp = new node<T>;
//		temp->data = val;
//		temp->next = top_ptr;						
//		top_ptr = temp;						//if(top_ptr == NULL)
//								     //temp->next = NULL; else    temp->next = top_ptr; */					
//	}
//	T top() const
//	{
//		return top_ptr->data;
//	}
//
//	void pop()
//	{
//		node<T>  *temp;
//		temp = top_ptr;
//		top_ptr = temp->next; // top_ptr = top_ptr-next;
//		delete temp;
//	}
//	bool empty() const
//	{
//		return top_ptr == NULL;
//	}
//	bool full() const 
//	{
//		node<T>* temp;
//		temp = new node<T>;
//		if (temp = NULL )
//		{
//			return true;
//		}
//		else
//			delete temp;
//		return false;
//	}
//	void make_empty()
//	{
//		while (!empty())
//		{
//			pop();
//		}
//	}
//
//	~stacck()
//	{
//		make_empty();
//	}
//
//
//};
//int main()
//{
//	stacck<int> s;
//	s.push(5);
//
//}