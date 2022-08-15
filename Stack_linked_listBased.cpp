#include <iostream>
using namespace std;

struct Node
{
	int data;
	Node* next;
};
class _stack {
private:
	Node* top;
public:
	_stack() {
		top = NULL;
	}
	int isEmpty() const {
		return top == NULL;
	}
	int Top() const
	{
		return top->data;
	}
	void push(const int& val)
	{
		Node* newnode;
		newnode = new Node;
		newnode->data = val;
		newnode->next = NULL;
		if (isEmpty())
		{
			top = newnode;
		}
		else
			newnode->next = top;
		top = newnode;
	}
	void pop()
	{
		Node* temp;
		temp = top;
		top = temp->next;
		delete temp;
	}
	bool makeEmpty()
	{
		while (!isEmpty())
		{
			pop();
            return true;
		}
        return false;
	}
	~_stack()
	{
		makeEmpty();
	}
};
int main() {
	_stack s1;
	s1.push(12);
	s1.push(13);
	s1.push(14);
	s1.push(15);
    s1.pop();
	cout<<s1.Top();
}