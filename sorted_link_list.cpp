//#include <iostream>
//
//using namespace std;
//template <typename T>
//struct node
//{
//	T data;
//	node<T>* next;
//	
//};
//
//template <typename T>
//
//class link_list
//{
//private:
//	node<T>* head, * it;
//	int n;
//public:
//	link_list()
//	{
//		head = NULL;
//		it = NULL;
//		n = 0;
//	}
//	~link_list()
//	{
//		//to do
//	}
//	void insert(const T& val)
//	{
//		node<T>* temp;
//		temp = new node<T>;
//		//to an empty list
//		if (head == NULL)
//		{
//			temp = head;
//			temp->next = NULL;
//			temp->data = val;
//		}
//		else
//			// at the begining of list
//		if (head != NULL && val<head->data)
//		{
//			temp->next = head;
//			temp = head;
//
//		}
//		else
//			while (true)
//			{
//				node<T>* ptr; //for middle value
//				//ptr = new node<T>;
//				ptr = head;
//				if (/*ptr->next==NULL ||*/ val < ptr->next->data)
//				{
//					temp->next = ptr->next ;
//					//temp->next = NULL;
//					ptr->next = temp;
//					break;
//				}
//				ptr = ptr->next;
//			}
//		n++;
//	}
//
//	bool update(const T& old_val, const T& new_val)
//	{
//		if (erase(old_val))
//		{
//		if(	insert(new_val))
//			{
//				return true;
//			}
//		}
//		else
//			return false;
//	}
//	bool erase(const T& val)
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
//		while (temp->next != NULL)
//		{
//			if (val < temp->data)
//			{
//				return false;
//			}
//			if (temp ->next->data = val)
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
//		n--;
//	}
//
//	void reset()
//	{
//		it = head;
//	}
//	bool is_last() const
//	{
//		return it = NULL;
//	}
//	T get_next()
//	{
//		if (is_last())
//		{
//			throw("no next value occurs");
//		}
//		else
//		{
//			T val;
//			val = it->data;
//			it =it->next;
//			return val;
//		}
//	}
//	bool full() const
//	{
//		return false;
//	}
//	bool empty() const
//	{
//		return head = NULL;
//	}
//	int length() const
//	{
//		return n;
//	}
//};
//
//int main()
//{
//	link_list<char> l;
//	l.insert('C');
//	l.insert('B');
//	l.insert('D');
//	l.insert('A');
//}
