#include<iostream>
using namespace std;

int main()
{
	int a = 5;
	int *b = &a;
	a = *b+1;
	cout<<*b<<endl;
	cout<<++a<<endl;
	cout<<*b<<endl;
}