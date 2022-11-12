//#include <iostream>
//
//using namespace std;
//template <typename T>
//struct bnode
//{
//	T data;
//	bnode * left, * right;
//};
//template <typename T>
//class bst
//{
//private:
//	bnode<T>* root;
//public:
//	bst()
//	{
//		root = NULL;
//	}
//	// iterative method
//	void insert(const T& val)
//	{
//		bnode<T>* new_node;
//		new_node = new bnode<T>;
//		new_node->data = val;
//		new_node->left = new_node->right = NULL;
//		if (root == NULL)
//		{
//			root = new_node;
//		}
//		else
//			if (root != NULL)
//				{
//					bnode<T>* temp;
//					temp = root;
//					if (val < temp->data && temp->left == NULL)
//					{
//							temp->left = new_node;
//							if(temp->left != NULL)
//							{
//								temp = temp->left;
//							}
//					}
//			        else
//					if (val > temp->data && temp->right == NULL)
//					{
//						temp->right = new_node;
//						if (temp->right != NULL)
//						{
//							temp = temp->right;
//						}
//					}
//					else
//						if (val == temp->data)
//						{
//							throw("same values can't be inserted");
//						}
//				}
//			
//
//
//	}
//
//	int length() const
//	{
//		/*bnode<T>* temp;
//		temp = new bnode<T>;
//		temp = root;*/
//		count = 0;
//		if (root == NULL)
//		{
//			return count;
//		}
//		else
//			if (root != NULL)
//			{
//				count = 1;
//				while (root->left != NULL && root->right != NULL)
//				{
//					count++;
//				}
//				return count;
//			}
//		
//
//	}
//
//};
//int main()
//{
//	bst<int> b;
//	b.insert('E');
//	b.insert('A');
//	b.insert('C');
//	b.insert('F');
//	b.length();
//	cout << b.length();
//}