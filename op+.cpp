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
//	student():rno(0),name(NULL){}
//	student(const int r, const char* n)
//	{
//		rno = r;
//		name = new char[strlen(n)];
//		strcpy(name, n);
//	}
//	/*student(const student& s2)
//	{
//		rno = s2.rno;
//		name = s2.name;
//
//	}*/
//
//	student operator+(student s2)
//	{
//		student s3;
//		s3.rno = this->rno + s2.rno;
//
//		s3.name = strcat(this->name, s2.name);
//		//s3.name = this->name + s2.name;
//		return s3;
//	}
//	void display()
//	{
//		cout << "added roll no is: " << rno << "\t\t" << "added names are: " << name << endl;
//	}
//};
//int main()
//{
//	student s1(12, "taha");
//	student s2(13, "ali");
//	student s3 = s1 + s2;
//	s3.display();
//}