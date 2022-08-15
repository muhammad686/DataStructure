#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a= b;
    b= temp;
}
void BubbleSort(int *a, int n)
{
    for(int i = 0 ; i<n; i++)
    {
        for(int j = 0; j<n-i; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
    }
}
void printArray(int *a, int size)
{
    for(int i = 0; i<size; i++)
    {
        cout<<" "<<a[i]<<"\t";
    }
}
int main()
{
    //BubbleSort(12,23,4,32,8);
    int arr[] = {12,4,-4,5,67,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, size);
    printArray(arr,size);
}