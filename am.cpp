#include <iostream>
using namespace std;

// void function()
// {
   
// }
int main()
{
   // function();
     int array[10] = {1,2,3,4,5,6,7,8,9,0};
    int Arr[12];
    cout<<"FIRST ARRAY: "<<endl;
    for(int i=0;i<=10;i++)
    {
    cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"UPDATED ARRAY: "<<endl;
      for(int i=0;i<=10;i++)
    {
        Arr[i] = array[i*2];
        cout<<array[i]<<" ";
    } 
    return 0;
}