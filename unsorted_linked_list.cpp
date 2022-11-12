//#include<iostream>
//
//using namespace std;
//
//template <typename T>
//struct node
//{
//	T data;
//	node* next;
//};
//
//template <typename T>
//class list
//{
//private:
//	node<T>* head;
//public:
//	list()
//	{
//		head = NULL;
//	}
//	~list()
//	{
//		//to do
//	}
//
//	void insert(const T &val)
//	{
//		node<T>* temp;
//		temp = new node<T>;
//		temp->data = val;
//		temp->next = head;
//		head = temp;
//	//	temp->next = null;
//		if (head == null)
//		{
//			temp->next = head; // null;
//		}
//		else
//			temp->next = head;
//		head = temp;
//	}
//	bool find(const T& val)
//	{
//		node<T>* temp;
//		temp = head;
//		while (head != NULL)
//		{
//			if (temp->data = val)
//			{
//				return true;
//			}
//			else
//			temp = temp->next;
//		}
//		return false;
//	}
//
//	bool update(const T& old_val, const T& new_val)
//	{
//		node<T>* temp;
//		temp = head;
//		while (head != NULL)
//		{
//			if (temp->data = old_val)
//			{
//				temp->data = new_val;
//			}
//			else
//				temp = temp->next;
//		}
//		return false;
//	}
//
//	bool erase(const T &val)
//	{
//		// when list is NULL
//		if (head == NULL)
//		{
//			return false;
//		}
//
//		node<T>  temp;
//		temp = new node<T>;
//
//		//for 1st node
//		if (temp->data = head)
//		{
//			temp->next = head;
//			delete temp;
//			return true;
//		}
//
//
//		//for 2nd to end node
//
//		while (temp->next != NULL )
//		{
//			if (temp - next->data = val)
//			{
//				node<T>* to_del;
//				to_del = temp->next;
//				temp->next = to_del->next;
//				delete to_del;
//
//				return true;
//			}
//			temp = temp->next;
//
//		}
//		// value not found in the lsit
//		return false;
//	}
//
//	T empty() const
//	{
//		return head == NULL;
//	}
//	bool full() 
//	{
//		node<T>* temp;
//		temp = new node<T>;
//		if (temp = NULL )
//		{
//			return true;
//		}
//		else
//		delete temp;
//		return false;
//	}
//
//};
//
//int main()
//{
//	list<int> l;
//	l.insert(3);
//	l.insert(4);
//	l.insert(5);
//	l.insert(6);
//
//	cout<<l.find(22);
//	
//}