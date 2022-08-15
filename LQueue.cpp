#include <iostream>
using namespace std;

class Queue
{
    private:
    int *queue;
    int front , rear ,s;
    public:
    Queue(int size =100)
    {
        s = size;
        front = -1;
        rear = -1;
        queue = new int(s);
    }
    int isempty() const{
        if(front ==-1 && rear == -1)
        {
            return true;
        }
        else
        return false;
    }
    int isfull() const{
        if(rear == s-1)
        {
            return true;
        }
        else
        return false;
    }
    void Enqueue(const int &val)
    {
        if(!isfull())
        {
        front = 0;
        rear++;
        queue[rear]= val;
        }
    }
    void Dequeue()
    {
        int num;
        if(!isempty())
        {
            num = queue[front];
            front++;
        }
        cout<<"The popped value is: "<<num<<endl;
    }
    int getFront() const{
        return queue[front];
    }
    int getRear() const{
        return queue[rear];
    }
    // void display()
    // {
    //     while(!isempty())//(queue[front]!=queue[rear])
    //     {
    //         // cout<<" value is: "<<queue[front]<<" ";
    //         // front++;
    //         Dequeue();
    //     }
    // }
    ~Queue()
    {
        delete[] queue;
    }
};
int main()
{
    Queue q;
    q.Enqueue(12);
    q.Enqueue(13);
    q.Enqueue(14);
    q.Enqueue(15);
    q.Enqueue(16);
    //q.display();
    cout<<q.getFront();
    cout<<q.getRear();
    q.Dequeue();q.Dequeue();q.Dequeue();
    //q.display();
}