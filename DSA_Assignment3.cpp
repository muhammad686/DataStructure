#include <iostream>
using namespace std;
struct node{
    char data;
    node *next; 
};
class STACK
{
private:
     node *top;
public:
    STACK()
    {
        top = NULL;
    }
    char empty() const
    {
        return top ==NULL;
    }
    void push(char c)
    {
        node *newN;
        newN = new node;
        newN->data = c;
        newN->next = NULL;
        if(empty())
        {
            top = newN;
        }
        else
        {
            newN->next = top;
            top = newN;
        }
    }
    void pop()
    {
        node *temp;
        temp = new node;
        temp = top;
        top = top->next;
        delete temp;
    }
    bool makeEmpty()
    {
        while(!empty())
        {
            pop();
            return true;
        }
        return false;
    }
    char getTop() const
    {
        return top->data;
    }
    bool isBalanced()
    {
    string str;
    cout<<"\nEnter the string: ";
    getline(cin,str);
    int l = str.size();
    bool ans = true;
    for (int i = 0; i < l; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
                    push(str[i]);
        }
        else
        if (str[i] == ')')
        {
            if(!empty() &&getTop()=='(')
            {
                pop();
            }
            else
            {
            ans = false;
            break;
            }
        }
        else
        if (str[i] == ']')
        {
            if(!empty() &&getTop()=='[')
            {
                pop();
            }
            else
            {
            ans = false;
            break;
            }
        } 
        else
        if (str[i] == '}')
        {
            if(!empty() && getTop()=='{')
            {
                pop();
            }
            else
            {
            ans = false;
            break;
            }
        }
    }
    if(!empty())
    {
        return false;
    }
    return ans;
}
    ~STACK()
    {
        makeEmpty();
    }
};
int main()
{
 
    STACK s;
    char ch = 'Y';
    if(s.isBalanced())
    {
        cout<<"string is balanced! "<<endl;
    }
    else
    {
        cout<<"string is not Balanced! "<<endl;
    }
    
     
}