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
//	student()
//	{
//		rno = 0;
//		name = NULL;
//	}
//	student(const int r, const char* n)
//	{
//		rno = r;
//		name = new char[strlen(n)];
//		strcpy(name, n);
//	}
//	// operator ==
//	/*student(const student& s2)
//	{
//		rno = s2.rno;
//		name = s2.name;
//	}*/
//	/*void getdata()
//	{
//		cin >> rno;
//		cin >> name;
//	}*/
//	void    operator==(student s2)//compare(student s2 )
//	{
//		if (rno == s2.rno && name ==s2.name)
//		{
//			cout<<" same :";
//		}
//		else
//			cout<<"diffrent:";
//	}
//	void display()
//	{
//		cout << "student  data is: " << rno << "\t\t" << name << endl;
//		
//	}
//	
//	// operator+
//	
//};
//int main()
//{
//	student s1(12, "muhammad taha");
//	student s2(12,  "ahsan ali");
//	//student s2(s1);  // use for copy constructor
//	
//	s1.display();
//	s2.display();
//	s1 == s2; // for operator calling
//	//s1.compare(s2); // use for funtion compare
//	
//	
//}