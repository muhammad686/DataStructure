#include <iostream>
using namespace std;
template <typename T>
struct LNode 
{
	T data;
	LNode<T>* next, *prev;
};
template <typename T>
class DoublyList
{
private:
	LNode<T>* head,*tail;
	int it;
public:
	DoublyList() 
	{
		head = tail=NULL;
		it = 0;
	}
	T empty() const {
		return head ==NULL;
	}
	void insertAt_end(const T& val)
	{
		LNode<T>* newnode;
		newnode = new LNode<T>;
		newnode->next = NULL;
		newnode->data = val;
		newnode->prev = NULL;
		if (head == NULL)
		{
			head = newnode;
			//tail = newnode;
		}
		else
		{
		LNode<T>* temp=NULL;
		temp = head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
		newnode->prev = temp;
		tail = temp;
		}
		it++;
	}
	void insertAt_begin(const T& val) {
		LNode<T>* newnode;
		newnode = new LNode<T>;
		newnode->prev = NULL;
		newnode->data = val;
		newnode->next = NULL;
		if (head == NULL)
		{
			head = newnode;
		}
		else 
		{
			head->prev = newnode;
			newnode->next = head;
			head = newnode;
		}
		it++;
	}
	bool find(const T& val)
	{
		LNode<T>* temp;
		temp = head; //temp = tail;
		while (temp != NULL)
		{
			if (temp->data == val) {
				return true;
			}
			else
			temp = temp->next; // temp = temp->prev;
		}
		return false;
	}
	bool erase(const T& val)
	{
		LNode<T>* temp=NULL;
		temp = head;
		if (temp->data == val) 		// case 1 for only node
		{
			if (temp->next == NULL && temp->prev == NULL)
			{
				delete temp;
				it--;
				return true;
			}
		}
		else 		//case 2: to delete head node
		if (temp->data == val && temp->next != NULL&&temp->prev==NULL)
		{
			head = head->next;
			delete temp;
			it--;
			return true;
		}
		else 		//case 3: middle node
		{
			while (temp)
			{
				if (temp->next->data == val&& temp->next->next!=NULL)
				{
					LNode<T>* delptr =NULL;
					delptr = temp->next;
					temp->next = delptr->next;
					delptr->next->prev = temp;
					delete delptr;
					it--;
					return true;
				}
				else //case 4: to delete last node
					if (temp->next->data == val && temp->next->next == NULL)
					{
						LNode<T>* delptr = NULL;
						delptr = temp->next;
						temp->next = delptr->next;
						delete delptr;
						it--;
					}
				temp = temp->next;
			}
		}
		return false;
	}
	bool update(const T& val1, const T& val2)
	{
		LNode<T>* temp = NULL;
		temp = head;
		while (temp)
		{
			if (temp->data == val1)
			{
				temp->data = val2;
				return true;
			}
			else
				temp = temp->next;
		}
		return false;
	}
	
	void display() {
		LNode<T>* temp;
		temp = head;
		cout << "values are:  ";
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}cout << "\n";
		cout << "total no of nodes in list are:  " << it << endl;
	}
};
int main()
{
	DoublyList<int> l1;
	
	l1.insertAt_end(12);
	l1.insertAt_end(14);
	l1.insertAt_end(16);
	l1.insertAt_begin(10);
	l1.insertAt_begin(8);
	l1.display();
	cout << endl;
	int r = l1.find(10);
	if (r == 1)
	{
		cout << "value found." << endl;
	}
	else 
		cout << "value not found!" << endl;
	l1.erase(14);
	l1.display();
	cout << endl;
	l1.update(8, 245);
	l1.display();
	l1.erase(12);
	l1.display();

}

