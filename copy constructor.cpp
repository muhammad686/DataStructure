//#include <iostream>
//#include <string>
//using namespace std;
//
//class student
//{
//private:
//	int rno;
//	char* name;
//public:
//	student(const int r , const char* n)
//	{
//		rno = r;
//		name = new char[strlen(n)+1];
//		strcpy(name, n);
//	}
//	student(const student& obj)
//	{
//		rno = obj.rno;
//		name = obj.name;
//	}
//	void display()
//	{
//		cout << " roll no is: " << rno << endl;
//		cout << "name is :" << name << endl;
//	}
//};
//int main()
//{
//	student s1(12, "Muhammad Taha");
//	student s2=s1; //or s2(s1);
//
//	s1.display();
//	s2.display();
//}