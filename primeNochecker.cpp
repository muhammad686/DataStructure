#include<iostream>
using namespace std;
int main()
{

int m , n;
m = 0;
cout<<" enter the num: ";
cin>>n;
	for(int i = 2; i= n-1; i++)
	{
		if(n%i==0)
		{
			cout<<i<<" is prime number!";
			m=1;
			break;
		}
	}
	if(m==0)
	{
		cout<<"number is prime! "<<endl;
	}

}