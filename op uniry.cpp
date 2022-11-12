#include <iostream>
using namespace std;

class student
{
private:
	int rno;
public:
	student():rno(0){}
	student operator++(student& s)
	{
		 return rno++;
	}
	void operator--()
	{
		rno--;
	}
	void display()
	{
		cout << "roll no is: " << rno << endl;
	}
};
int main()
{
	student s1;
	//s1.display();
	s1++;
	/*s1.display();
	s1++;
	s1.display();
	s1++;
	s1.display();*/

	cout << endl;
	s1--;
	s1.display();
	/*s1--;
	s1.display();
	s1--;
	s1.display();*/
}