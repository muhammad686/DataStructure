#include <iostream>
#include<string>
#include<chrono>
using namespace std::chrono; 
using namespace std;

struct Bnode
{
	int RollNo;
	string Name;
	double CGPA;
	int semester;
	Bnode *left;
	Bnode *right;
};

class BSTree
{
private:
	Bnode *root;
	void displayInOrder(Bnode *ptr)
	{
		if (ptr != NULL)
		{
			displayInOrder(ptr->left);
			cout<<" " << ptr->RollNo << "\t\t\t" << ptr->Name << "\t\t" << ptr->CGPA << "\t\t\t" << ptr->semester << endl;
			cout<<"----------------------------------------"<<endl;
			displayInOrder(ptr->right);
		}
	}

public:
	// constructor
	BSTree()
	{
		root = NULL;
	}
	// empty function
	int isempty() const
	{
		return root == NULL;
	}
	void insert(const int &rno, const string &n, const double &gpa, const int &sem)
	{
		Bnode *newN;
		newN = new Bnode();
		newN->RollNo = rno;
		newN->Name = n;
		newN->CGPA = gpa;
		newN->semester = sem;
		newN->left = NULL;
		newN->right = NULL;

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
				if (newN->RollNo < nodeptr->RollNo)
				{
					if (nodeptr->left == NULL)
					{
						nodeptr->left = newN;
						break;
					}
					else
						nodeptr = nodeptr->left;
				}
				else if (newN->RollNo > nodeptr->RollNo)
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
					cout << "Same Roll No is not Allowed!" << endl;
					break;
				}
			}
		}
	}
	void depthOfNode(const int &rno)
	{
		auto start = high_resolution_clock::now();

		int depth = -1;
		Bnode *temp;
		temp = root;
		if(!root)
		{
			//cout<<" tree is empty: "<<depth<<endl;
			cout<<"Oops! Tree is empty!"<<endl;
		}
		else
		{
			while(temp)
			{
				if(rno == temp->RollNo)
				{					
					depth++;
					break;
				}
				else
				if(rno < temp->RollNo)
				{
					if(temp->left!=NULL)
					{
						temp = temp->left;
						depth++;	
					}

				}
				else
				if(rno > temp->RollNo)
				{
					if(temp->right!=NULL)
					{
						temp = temp->right;
						depth++;	
					}
				}
				
			}
			cout<<"The depth of a node->RollNo ["<<rno<<"] is: "<<depth<<endl;
		}

		auto stop = high_resolution_clock::now();
		auto duration = duration_cast<microseconds>(stop - start);
		cout << "Total time taken by Algorithm   is: " << duration.count() << " microsec\n\n" << endl;
	}

	void display()
	{
		cout << "RollNo\t\t " <<"Name\t\t" <<"CGPA\t" <<"Semester"<< endl;
		cout<<"----------------------------------------"<<endl;
		displayInOrder(root);
	}

};

int main()
{
	BSTree t1;
	t1.insert(12, "taha", 2.3, 6);
	t1.insert(11, "Hassan", 3.3, 6);
	t1.insert(13, "Hassan", 3.3, 6);
	t1.insert(14, "Hassan", 3.3, 6);
	t1.insert(1, "Hassan", 3.3, 6);
	t1.insert(6, "Hassan", 3.3, 6);
	t1.insert(4,"zuhair",3.4,8);

	t1.display();
	t1.depthOfNode(14);
	t1.depthOfNode(11);

}