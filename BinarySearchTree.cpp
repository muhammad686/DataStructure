#include<iostream>
using namespace std;

struct Bnode{
int data;
Bnode *left, *right;
};

// non class functions;
/*INSERT DATA*/
void insert_rec(Bnode *&ptr, const int &val)
{
    if(!ptr)
    {
        ptr = new Bnode;
        ptr->data = val;
        ptr->left = ptr->right = NULL;
    }
    else
    {
        if(val>ptr->data)
        {
            insert_rec(ptr->right,val);
        }
        else
        {
            insert_rec(ptr->left,val);
        }
    }
}
/*SEARCH DATA*/
bool search_rec(Bnode *&ptr, const int &val)
{
    if(!ptr)
    {
        return false;
    }
    else
    {
        if(ptr!=NULL)
        {
            if(val == ptr->data)
            {
                return true;
            }
            else
            if(val < ptr->data)
            {
                return search_rec(ptr->left,val);
            }
            else
            if(val > ptr->data)
            {
                return search_rec(ptr->right,val);
            }
            return true;
        }
        return false;
    }
    return 0;
}
/*DELETE NODE*/
void DeleteNode(Bnode *&ptr)
{   
    if(ptr->left == NULL && ptr->right == NULL)   //only one node OR leaf Node
    {
        delete ptr;
        ptr = NULL;
    }
    else
    if(ptr->left == NULL && ptr->right!= NULL)   //only right node
    {
      Bnode *temp;
      temp = ptr;
      ptr = ptr->right;
      delete temp;   
    }
    else
    if(ptr->left!=NULL && ptr->right == NULL)  //only left node
    {
        Bnode *temp;
        temp = ptr;
        ptr = ptr->left;
        delete temp;
    }
    else
    if(ptr->left !=NULL && ptr->right !=NULL) // when both left & right nodes aren't NULL
    {
        //TO DO
    }

}
bool Delete_rec(Bnode *&ptr, const int &val)
{
    if(!ptr)
    {
        return false;
    }
    else
    {
        if(ptr!=NULL)
        {
            while(ptr) 
            {   // for only one node
                
            }

        }
    }
}

class BinarySearchTree
{
private:
Bnode *root;
public:
    BinarySearchTree();
    ~BinarySearchTree();
    void insert(const int &val);
    bool search(const int &val);
    bool Delete(const int &val);

};

BinarySearchTree::BinarySearchTree()
{
    root = NULL;
}
void BinarySearchTree::insert(const int &val)
{
    insert_rec(root,val);
}
bool BinarySearchTree::search(const int &val)
{
        search_rec(root,val);
}
bool BinarySearchTree::Delete(const int &val)
{

}
BinarySearchTree::~BinarySearchTree()
{
}
