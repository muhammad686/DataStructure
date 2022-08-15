#include<iostream>
using namespace std;
struct lnode
{
	int rno;
	string name;
	double cgpa;
	lnode* next, * prev;
};

class studentslist
{
private:
	lnode* head;
	int nofn;
public:
	studentslist() {
		head = NULL;
		nofn = 0;
	}
	void insert()
	{
		int r;
		string n;
		double c;
		cout << "Enter the Roll No: ";
		cin >> r;
		cout << "Enter the Name: ";
		cin >> n;
		cout << "Enter the CGPA: ";
		cin >> c;
		lnode* newnode;
		newnode = new lnode;

		newnode->rno = r;
		newnode->name = n;
		newnode->cgpa = c;
		newnode->next = NULL;
		newnode->prev = NULL;
		if (head == NULL) {
			head = newnode;
			nofn++;
		}
		else
			if (head != NULL && newnode->rno < head->rno)
			{
				head->prev = newnode;
				newnode->next = head;
				head = newnode;
				nofn++;
			}
			else
			{
				lnode *temp, *tempNext;
				temp = head;
				tempNext = temp->next;
				while (temp != NULL)
				{
					if (newnode->rno < tempNext->rno)
					{
						temp->next = newnode;
						newnode->prev = temp;
						newnode->next = tempNext;
						tempNext->prev = newnode;
					}
					else
					{
						temp->next = newnode;
						newnode->prev = temp;
						temp = newnode;
					}
					temp = temp->next;
				}
			}
	}
	void Delete()
	{
		int r;
		cout << "Enter Roll no to Delete: ";
		cin >> r;
		lnode* temp = NULL;
		temp = head;
		if (empty() || temp->rno != r)
		{
			cout<<"list is empty!"<<endl;
		}
		else
			if (temp->rno == r) 		// case 1 for only node
			{
				if (temp->next == NULL && temp->prev == NULL)
				{
					delete temp;
					nofn--;
					//return true;
					cout<<"node deleted!"<<endl;
				}
			}
			else 		//case 2: to delete head node
				if (temp->rno == r && temp->next != NULL && temp->prev == NULL)
				{
					head = head->next;
					delete temp;
					nofn--;
					//return true;
				}
				else 		//case 3: middle node
				{
					while (temp)
					{
						if (temp->next->rno == r && temp->next->next != NULL)
						{
							lnode* delptr = NULL;
							delptr = temp->next;
							temp->next = delptr->next;
							delptr->next->prev = temp;
							delete delptr;
							nofn--;
							//return true;
						}
						else //case 4: to delete last node
							if (temp->next->rno == r && temp->next->next == NULL)
							{
								lnode* delptr = NULL;
								delptr = temp->next;
								temp->next = delptr->next;
								delete delptr;
								nofn--;
							}
						temp = temp->next;
					}
				}
		//return false;
	}
	void display()
	{

		lnode* temp, * tail;// = NULL;
		temp = head;
		if (empty())
		{
			cout << "list is already empty!\n";
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			tail = temp;
			while (tail!= NULL)
			{
				cout << " roll no: " << tail->rno << "\tname: " << tail->name << "\tcgpa: " << tail->cgpa << endl;
				tail = tail->prev;
			}
			cout << "\ntotal no of student's records are: " << nofn << "\n" << endl;
		}
	}
	int empty() const
	{
		return head == NULL;
	}
	~studentslist()
	{
		lnode* nodeptr, * nextptr;
		nodeptr = head;
		while (nodeptr != NULL)
		{
			nextptr = nodeptr->next;
			delete nodeptr;
			nodeptr = nextptr;
		}
	}

};
int main()
{
	cout << "\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t------------STUDENT MANAGEMENT SYSTEM-------" << endl;
	cout << "\t\t\t--------------------------------------------" << endl;

	studentslist obj;
	int op;
	char ch = 'Y';
	while (ch == 'Y' || ch == 'y') {
		cout << "1- ADD STUDENT DATA" << endl;
		cout << "2- DELETE STUDENT DATA" << endl;
		cout << "3- DISPLAY STUDENT DATA\n" << endl;
		cout << "Enter an option: [1-3]";
		cin >> op;
		switch (op) {
		case 1: obj.insert(); break;
		case 2: obj.Delete(); break;
		case 3: obj.display(); break;
		default: cout << "Wrong choice!\n";
		}

		cout << "Do you want to continue? (Y/N): ";
		cin >> ch;
	}
}
