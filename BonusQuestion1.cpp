#include<iostream>

using namespace std;

struct  Bnode
{
   int data;
   Bnode *left, *right;
};

class TreeA
{
    private:
    Bnode *root;

    void insertData(Bnode *&ptr , const int &val)
    {
        if(!ptr)
        {
            ptr = new Bnode;
            ptr->data =val;
            ptr->left = ptr->right =NULL;
        }
        else
        {
            if(val< ptr->data)
            {
                insertData(ptr->left,val);
            }
            else
            if(val>ptr->data)
            {
                insertData(ptr->right,val);
            }
        }
    }
    void copyTree(Bnode *src, Bnode *&dest)
    {
        if(src == NULL)
        {
            dest = NULL;
        }
        else
        {
            dest = new Bnode;
            dest->data = src->data;
            copyTree(src->left,dest->left);
            copyTree(src->right,dest->right);
        }
    }
    public:
    TreeA()
    {
        root = NULL;
    }
    int AisEmpty() const{
        return root == NULL;
    }
    void insert(const int &num)
    {
        insertData(root,num);
    }
    void CopyConst(const TreeA &src)
    {
        copyTree(src.root,root);
    }
};
int main()
{
    TreeA a1;
    
    a.insert(10);a.insert(11);a.insert(21);a.insert(19);
    a.insert(7);a.insert(4);a.insert(8);a.insert(9);
    TreeA a2 = a1;
    // b.insert(10);b.insert(11);b.insert(21);b.insert(19);
    // b.insert(7);b.insert(4);b.insert(8);b.insert(9);
    // compare(a,b);

    if(a1.AisEmpty() && a2.AisEmpty() || a1 ==a2)
    {
        cout<<"Trees are empty! and same!";
    }
    else
    {
        cout<<"not same!"<<endl;

    }
        
    
}