#include<iostream>
using namespace std;

struct Bnode
{
    int data;
    Bnode *left , *right;
};
class BST
{
private:
Bnode *root;
public:
    BST();
    int isempty() const;
    void insert(const int &val);
    bool search(const int &val);
    ~BST();
};
BST::BST()
{
    root = NULL;
}
int BST::isempty() const{
    return root ==NULL;
}
void BST::insert(const int &val)
{
    Bnode* nn;
    nn->data = val;
    nn->left = nn->right = NULL;
    if(isempty())
    {
        root = NULL;
    }
    else{
        Bnode *temp;
        temp = root;
        while(temp!=NULL)
        {
            if(val<temp->data)
            {
                if(temp->left!=NULL)
                {
                    temp = temp->left;
                }
                else
                temp->left= nn;
                break;
            }
            else
            if(val>temp->data)
            {
                if(temp->right!=NULL)
                {
                    temp = temp->right;
                }
                else
                temp->right = nn;
                break;
            }
            else
            cout<<"same value can't be inserted in BST!"<<endl;
        }
    }
}
BST::~BST()
{
    delete root;
}
int main()
{
    BST b;
    b.insert(12);b.insert(2);b.insert(16);b.insert(8);
b.insert(12);b.insert(21);b.insert(12);b.insert(13);b.insert(42);
}

