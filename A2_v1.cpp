#include<iostream>
using namespace std;
struct lnode
{
	int rno;
	string name;
	//double cgpa;
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
	void insert(const int &r , const string &n)
	{
		lnode* newnode;
		newnode = new lnode;

		newnode->rno = r;
		newnode->name = n;
		//newnode->cgpa = c;
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
				lnode* temp, * tempNext;
				temp = head;
				tempNext = temp->next;
				while (temp != NULL)
				{
					if (newnode->rno < tempNext->rno)
					{
						temp->next = newnode;
						newnode->next = tempNext;
						newnode->prev = temp;
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
	
	
};
int main()
{

	studentslist obj;
	obj.insert(12,"taha");
	obj.insert(13,"tahs");
	obj.insert(14,"tahd");
	obj.insert(15,"tahf");
	obj.insert(16,"taha");
	obj.insert(12,"tahg");
	obj.insert(12,"tahh");
	
}
