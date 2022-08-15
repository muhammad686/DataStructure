#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;
// if you have group of constants better to use enumerated (enum) data types.
template <typename T>
struct bnode
{
	T data;
	bnode<T>* left, * right;
};
template <typename T>
//recussion is only desired when calls doesn't exceed O(n).
void insert_rec(bnode<T> *&ptr , const T &val)
{
	if (ptr == NULL)
	{
		ptr = new bnode<T>;
		ptr->data = val;
		ptr->left = ptr->right = NULL;
	}
	else
		if (ptr != NULL)
		{
			if (val < ptr->data)
			{
				insert_rec(ptr->left, val);
			}
			else
				if (val > ptr->data)
				{
					insert_rec(ptr->right, val);
				}
		}
}
template <typename T>
int count_nodes(const bnode<T> *ptr)
{
	if (ptr == NULL)
	{//base case
		return 0;
	}
	else
	{ //general case 1,2
		return 1 + count_nodes(ptr->left) + count_nodes(ptr->right);
	}
}
template <typename T>
bool find_rec(bnode<T>* ptr, T& val)
{
	if (ptr == NULL)
	{
		return false;
	}
//	else
		if (ptr != NULL)
		{
			if (val == ptr->data)
			{
				val = ptr->data;
				return true;
			}
			else
				if (val < ptr->data)
				{
					return find_rec(ptr->left, val);
				}
				else
				if (val > ptr->data)
				{
					return find_rec(ptr->right, val);
				}
			return true;
		}
	return 0;
}
template <typename T>
bool erase_rec(bnode<T>* &ptr,const T& val)
{
	if (ptr == NULL)
	{
		return false;
	}
	else
		if (ptr != NULL)
		{
			if (val == ptr->data)
			{
				//val = ptr->data;
				erase_node(ptr);
				//return true;
			}
			else
				if (val < ptr->data)
				{
					return erase_rec(ptr->left, val);
				}
				else
					if (val > ptr->data)
					{
						return erase_rec(ptr->right, val);
					}
			return true;
		}
return false;
}
//template <typename T>
//T pred(bnode<T>* ptr)
//{
//	bnode<T>* pr;
//	pr = NULL;
//	pr = ptr->left;
//	while (ptr->right != NULL)
//	{
//		pr = pr->right;
//	}
//	return pr->data;
//}
template <typename T>
void erase_node(bnode<T>*& ptr)
{
	//case1 only for leaf node
	if (ptr->left == NULL && ptr->right == NULL)
	{
		delete ptr;
		ptr = NULL;
	}
	else
	//case2 nodes has only left child
	if (ptr->left != NULL && ptr->right== NULL)
	{
		bnode<T>* temp;
		temp = ptr;
		ptr = ptr->left; // temp->left
		delete temp;
		//or
		/*	temp = ptr->left;
			delete ptr;
			ptr = temp;*/
	}
	else
	//case 3 node has only right child
	if (ptr->right != NULL && ptr->left == NULL)
	{
		bnode<T> *temp;
		temp = ptr;
		ptr = temp->right; //ptr = ptr->right;
		delete temp; 
	}
	//case 4 node has both child
	else
	{
		//option 1
		bnode<T>* pred, * prev;
		prev = NULL;
		pred = ptr->left;
		while (pred->right != NULL)
		{
			prev = pred;
			pred = pred->right;
		}
		ptr->data = pred->data;
		if (prev != NULL)
		{
			prev->right = pred->left;
		}
		else
		{
			ptr->left = pred->left;
		}
		delete pred;
		//option 2
		/*bnode<T>* pred;
		pred = ptr->left;
		while (pred->right != NULL)
		{
			ptr->data = pred->data;
			T val = pred->data;
			erase_rec(ptr->left, val);
		}*/
		//option 3
		/*ptr->data = pred(ptr);
		erase_rec(ptr->left, ptr->data);*/

	}

}

/*
  general traverse functions 
template <typename T>
void traverse(const bnode<T>* ptr, queue<T>& q)
{
	if (ptr != NULL)
	{	
		//case 1: it will display node value and then left side then right side values
		//pre order traversal
			q.push(ptr->data); // visiting data
			traverse(ptr->left, q);
			traverse(ptr->right, q);

		//case 2: it will display right leaf node towards root then move towards left leaf node (desscending order)
		//post order traversal
			traverse(ptr->left, q);
			traverse(ptr->right, q);
			q.push(ptr->data); // visiting data

		//case 3: it will display left leaf node towards root then move towards right leaf node (asscending order)
			//in order traversal
			traverse(ptr->left, q);
			q.push(ptr->data);
			traverse(ptr->right, q);
			 //mirror
			traverse(ptr->right, q);
			q.push(ptr->data);
			traverse(ptr->left, q);
	}
}
*/

enum  traversal  {LEVEL_ORDER,IN_ORDER,PRE_ORDER,POST_ORDER};
template <typename T>
void traverse_in(const bnode<T>* ptr, queue<T>& q) // in_order traversal
{
	if (ptr!=NULL)
	{
		traverse_in(ptr->left, q);
		q.push(ptr->data);
		traverse_in(ptr->right, q);
	}
}
template <typename T>
void traverse_pre(const bnode<T>* ptr, queue<T>& q) // pre_order traversal
{
	if (ptr!=NULL)
	{
		q.push(ptr->data);
		traverse_pre(ptr->left, q);
		traverse_pre(ptr->right, q);
		
	}
}
template <typename T>
void traverse_post(const bnode<T>* ptr, queue<T>& q) // post_order traversal
{
	if (ptr!=NULL)
	{
		traverse_post(ptr->right, q);
		q.push(ptr->data);
		traverse_post(ptr->left, q);
		

	}
}

template <typename T>
void traverse_level(bnode<T>* ptr, queue<T>& q) // level_order traversal
{
	queue<bnode<T>* > temp_q;
	//bnode<T>* root;
	temp_q.push(ptr);
	while (!temp_q.empty())
	{
		bnode<T>* temp;
		temp = temp_q.front();
		temp_q.pop();
		q.push(temp->data);
		if (temp->left != NULL)
		{
			temp_q.push(temp->left);
		}
		if (temp->right != NULL)
		{
			temp_q.push(temp->right);
		}

	}
}
template <typename T>
void make_empty_r(bnode<T>* ptr)
{
	if (ptr != NULL)
	{
		make_empty_r(ptr->left);
		make_empty_r(ptr->right);
		delete ptr;
	}
}
template<typename T>
void copy_tree(const bnode<T>* src, bnode<T>*& dest)
{
	if (src == NULL)
	{
		dest = NULL;
	}
	else
	{
		dest = new bnode<T>;
		dest->data = src->data;
		copy_tree(src->left, dest->left);
		copy_tree(src->right, dest->right);

	}
}

template <typename T>
class BST
{
private:
	bnode<T>* root;
	queue<T> q , q_in, q_pre, q_post,q_level;
public:
	BST()
	{
		root = NULL;
	} 
	~BST()
	{
		make_empty_r(root);
	}
	BST(const BST& src)
	{
		copy_tree(src.root, root);
	}
	void operator=(const BST& src)
	{
		make_empty();
		copy_tree(src.root, root);
	}
	void make_empty()
	{
		make_empty_r(root);
		root = NULL;
	}
	                        // display gerneral traversal
	/*void reset()
	{
		q = queue<T>();
		traverse(root, q);
	}*/
	void reset(traversal type )
	{
		switch (type)
		{
			case IN_ORDER: 
				q_in = queue<T>(); //q_in.make_empty();
				traverse_in(root, q_in);
				break;
			case PRE_ORDER: 
				q_pre = queue<T>(); //q_pre.make_empty();
				traverse_pre(root, q_pre);
				break;
			case POST_ORDER: 
				q_post = queue<T>(); //q_post.make_empty();
				traverse_post(root, q_post);
				break;
			case LEVEL_ORDER: 
				q_level = queue<T>(); //q_post.make_empty();
				traverse_level(root, q_level);
				break;
		}
	}
	/*T get_next()
	{
		if (is_last())
		{
			throw("can\'t return value");
		}
		T val;
		val = q.front();
		q.pop();
		return val;
	}*/
	// for switch type traversal
	T get_next(traversal type)
	{
		if (is_last(type))
		{
			throw("can\'t get more value");
		}
		T val;
		switch (type)
		{
			case IN_ORDER:
				
				val = q_in.front();
				q_in.pop();
				return val;
				break;
			case PRE_ORDER:
				
				val = q_pre.front();
				q_pre.pop();
				return val;
				break;
			case POST_ORDER:
				
				val = q_post.front();
				q_post.pop();
				return val;
				break;
			case LEVEL_ORDER:
				
				val = q_level.front();
				q_level.pop();
				return val;
				break;
		}
		return 0;
	}
	//bool is_last() const
	//{
	//	return q.empty();
	//	/*if (!NULL)
	//	{

	//	}*/
	//}
	bool is_last(traversal type )
	{
		switch (type)
		{
		case IN_ORDER:
		    return q_in.empty();
		case PRE_ORDER:
			return q_pre.empty();
		case POST_ORDER:
			return q_post.empty();
		case LEVEL_ORDER:
			return q_level.empty();
		
		}
		return 0;
	}
	void insert(const T& val)
	{
		insert_rec(root, val);
	}
	int length() const
	{
		return count_nodes(root);
	}
	int find(T &val) const   //also implement find max and min options. later
	{
		return find_rec(root,val);
	}
	int erase(const T& val) //const
	{
		return erase_rec(root, val);
	}

	/*int max() const
	{
		return max_rec(root);
	}*/
	/*int min() const
	{
		return min_rec(root);
	}*/
};
template <typename T>
void display(BST <T>& t , traversal type)
{
	t.reset(type);
	while (!t.is_last(type))
	{
		cout << " " << t.get_next(type) <<"\t";
	}
	cout << endl;
}
//void f(int n)
//{
//	cout << n << endl;
//	f(n + 1);
//	
//}
int main()
{
	BST<int> b;
	b.insert(6);
	b.insert(7);
	b.insert(3);
	b.insert(4);
	b.insert(5);
	b.insert(2);
	b.insert(9);b.insert(10);b.insert(1);b.insert(8);

	b.erase(9);

	b.length();
	cout << "no fo nodes : "<<b.length()<<endl;
	int x;
	x = 4;
	b.find(x);
	cout << "the search value is: " << b.find(x) << endl;
	//cout << "max value is: " << b.max() << endl;
	//cout << "min value is: " << b.min() << endl;

	//f(1);
	//cout<<"searched value is deleted: "<<b.erase(x)<<endl;
	
	/*cout << "pre order " << endl;
	display(b, PRE_ORDER);
	cout << "in order " << endl;
	display(b, IN_ORDER);
	cout << "post order " << endl;
	display(b, POST_ORDER);
	cout << "level order " << endl;
	display(b, LEVEL_ORDER);*/

	//copy constructor 
	BST<int> b2(b); // b2 = b;
	b2.erase(6);

	BST<int> b3;
	//b3.operator=(b2);
	b3 = b2;
	b3.erase(5);

	display(b, LEVEL_ORDER);
	display(b2, LEVEL_ORDER);
	display(b3, LEVEL_ORDER);
       cout<<" Hello How are you!"<<endl;
}