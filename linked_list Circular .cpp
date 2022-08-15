//#include <iostream>
//using namespace std;
//struct LNode 
//{
//	int data;
//	LNode *next;
//};
//class List
//{
//private:
//	LNode* head;
//public:
//	List()
//	{
//		head = NULL;
//	}
//	int empty() const
//	{
//		return head == NULL;
//	}
//	void insert_Atend(const int val) // inserting at the end of a node
//	{
//		LNode* newnode;
//		newnode = new LNode();
//		newnode->data = val;
//		newnode->next = head;
//		
//		if (head==NULL)
//		{
//			head = newnode;
//		}
//		else
//		{
//			LNode* temp;
//			temp = head;
//			while (temp->next)
//			{
//				temp = temp->next;
//			}
//			temp->next = newnode;
//			//newnode->next = head;
//		}	                   
//	}
//	//void insert_Atbegin(const int& val)
//	//{
//	//	LNode* newnode, *endnode;
//	//	endnode = head;
//	//	newnode = new LNode();
//	//	newnode->data = val;
//	//	newnode->next = head;
//	//	head = newnode;
//	//	endnode->next = head;
//	//	
//	//}
//	bool Find(const int &val)
//	{
//		LNode* ptr;
//		ptr = head;
//		while (ptr!=NULL)
//		{
//			if (ptr->data == val)
//			{
//				return true;
//			}
//			else
//				ptr = ptr->next;
//		}
//		return false;
//	}
//	bool update(const int &old_val, const int &new_val)
//	{
//		LNode* temp;
//		temp = head;
//		while (temp)
//		{
//			if (temp->data == old_val)
//			{
//				temp->data = new_val;
//				return true;
//			}
//			else
//				temp = temp->next;
//		}
//		return false;
//	}
//	bool Delete(const int& val)
//	{
//		LNode* temp;
//		temp = head;
//		//case 1: empty list
//		if (empty())
//		{
//			return false;
//		}
//		//case 2: first node
//		else
//			if (head->data == val) {
//				head = head->next;
//				delete temp;
//				return true;
//				/*if (head->next == NULL) {
//					delete head;
//					return true;
//				}
//				else {
//					head = head->next;
//					delete temp;
//					return true;
//				}*/
//			}
//		// case 3: middle node to end node
//		while (temp->next!=head)
//		{
//			if (temp->next->data == val)
//			{
//				LNode* todel;
//				todel = temp->next;
//				temp->next = todel->next;
//				delete todel;
//				return true;
//			}
//			else
//				temp = temp->next;
//		}
//		//case 5: node not found
//		return false;
//	}
//	void display()
//	{
//		LNode *temp;
//		temp = head;
//		while (temp)
//		{
//			cout << " " << temp->data << endl;
//			temp = temp->next;
//		}
//	}
//};
//int main()
//{
//	List l1;
//	//inserting at the end of node
//	l1.insert_Atend(12);
//	l1.insert_Atend(21);
//	l1.insert_Atend(23);
//	l1.Delete(9);
//	cout<<l1.Find(9);
//	cout << "\n";
//	l1.display();
//	cout<<l1.update(23, 24);
//	cout << "\n";
//	l1.display();
//	cout<<l1.Delete(24);
//	cout << "\n";
//	l1.display();
//}