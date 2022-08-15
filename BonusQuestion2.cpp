#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

struct Bnode
{
    int data;
    Bnode *left, *right;
};
class Tree
{
private:
Bnode* root;
public:
    Tree()
    {
        root = NULL;
    }
    void insert(const int &val)
    {
        Bnode *newN;
		newN = new Bnode();
		newN->data = val;
		

		if (!root)
		{
			root = newN;
		}
		else
		{
			Bnode *nodeptr;
			nodeptr = root;
			while (nodeptr != NULL)
			{
				if (newN->data < nodeptr->data)
				{
					if (nodeptr->left == NULL)
					{
						nodeptr->left = newN;
						break;
					}
					else
						nodeptr = nodeptr->left;
				}
				else if (newN->data > nodeptr->data)
				{
					if (nodeptr->right == NULL)
					{
						nodeptr->right = newN;
						break;
					}
					else
						nodeptr = nodeptr->right;
				}
				else
				{
					cout << "Same value is not Allowed!" << endl;
					break;
				}
			}
		}
	}
    
    void findMissingNumber()
    {
        Bnode* temp;
        temp = root;
        if(root!=NULL)
        {
            while(temp)
            {
                if((temp->data +1) != temp->right->data)
                {
                     cout<<"the missing value is: "<<(temp->data+1)<<" "<<endl;
                    break;
                }
                else
                    temp = temp->right;
            }
        }
        else
        {
            cout<<"Tree is Empty!"<<endl;
        }
        
    }
    //~Tree();
};

 int main()
 {
    Tree Tree1;
    srand(time(0));
    int val = (rand()%100)+1;
    for(int i =1; i<=100;i++)
    { 
        if(i!=val)
        {
          Tree1.insert(i);
        }
    }
    //cout<<val<<endl;
    Tree1.findMissingNumber();
 }
