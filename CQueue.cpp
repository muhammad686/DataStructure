#include<iostream>
using namespace std;
// template<typename T>
class Queue
{
    private:
    int *queue;
    int f, r, s, items;
    public:
    Queue(int size = 40)
    {
        f =-1;r =-1;
        s = size;
        queue = new int(s);
        items =0;
    }
    void Enqueue(const int &num)
    {
        if(isFull())
        {
            cout<<"queue is full!"<<endl;
        }
        else
        {
            r = (r+1)%s;
            queue[r]= num;
            items++;
        }
    }
    int Dequeue()
    {
        int value = 0;
        if(isEmpty())
        {
            cout<<"Queue is Empty! "<<endl;
        }
        else{
            f = (f+1)%s;
            value = queue[f];
            // f++;
            items--;
        }
        return value;
    }
    bool isEmpty()
    {
        if(items)
        {
            return false;
        }
        else
        return true;
    }
    bool isFull()
    {
        if(items<s)
        {
            return false;
        }
        else
        return true;
    }
    void makeEmpty()
    {
        f = r = -1;
        items = 0;
    }
     
};
int main()
{
    Queue q1;
    q1.Enqueue(12);
}