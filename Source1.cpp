#include<iostream>
using namespace std;

struct LNode {
	int data;
	LNode* next;
};
class student {
private:
	LNode* head, *tail;
public:
	student()
	{
		head = NULL;
		tail = head;
	}
	int empty() const
	{
		return head == NULL;
	}
	void insert(const int& val)
	{
		LNode* nn;
		nn = new LNode;
		nn->data = val;
		nn->next = NULL;
		if (empty())
		{
			head = nn;
			tail = head;
		}
		else
		{
			LNode* temp;
			temp = head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = nn;
		    tail = nn;
		}
	}
	void display()
	{
		cout << tail->data << endl;
	}
};
int main()
{
	student s1;
	s1.insert(12);
	//s1.insert(23);
	s1.display();
}