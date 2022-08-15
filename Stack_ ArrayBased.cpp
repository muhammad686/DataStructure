#include <iostream>
using namespace std;
class _stack {
private:
	int* array;
	int top, size;
public:
	_stack(int s = 10) {
		size = s;
		array = new int(size);
		top = -1;
	}
	bool isempty() const {
		if (top == -1) {
			return true;
		}
		else
			return false;
	}
	bool isfull() const {
		if (top == size - 1) {
			return true;
		}
		else
			return false;
	}
	int Top() const
	{
		return array[top];
	}
	void push(const int& val) 
	{
	if (isfull())
	{
		throw"stack overfolw!";
	}
	else
	top++;
	array[top] = val;
	}
	void pop() {
		if (!isempty())
		{
			top--;
		}
		else
			throw"stack underflow";
	}
	void make_empty() {
		while (!isempty())
		{
			pop();
		}
	}
	~_stack()
{
delete[] array;
}

};
int main()
{
	_stack s1;
	s1.push(12);
	s1.push(11);
	cout << s1.Top();
	s1.make_empty();
	cout << s1.Top();
}