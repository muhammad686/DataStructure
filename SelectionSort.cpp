#include<iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = a;
     a= b;
     b= temp;
}
void SelectionSort(int a[], int size)
{
    for(int i = 0; i< size-1; i++)
    {
        int min = i;
        for(int j= i+1; j<size; j++)
        {
            if(a[j]<a[min])
            {
                a[min] = a[j];
            }
        }
        swap(a[min],a[i]);
    }
}
void printArray(int *a, int size)
{
    for(int i =0; i<size; i++)
    {
        cout<<" "<<a[i]<<"\t";
    }
}
int main()
{
    int arr[] = {4,0,12,89,-3,76};
    int s = sizeof(arr)/sizeof(arr[0]);
    SelectionSort(arr,s);
    printArray(arr,s);

}