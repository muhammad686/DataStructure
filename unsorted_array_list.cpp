#include<iostream>
using namespace std;

template <typename T>

class list
{
private:
	T* data;
	int size, index, it;
public:
	list(int s = 100)
	{
		size = s;
		index = -1;
		data = new T[size];
		it = -1;
	}
	~list()
	{
		delete[]data;
	}

	void insert(const T& val)
	{
		index++;
		data[index] = val;
	}
	T get_insert_val()
	{
		for (index = 0; index < size; index++)
		{
			return data[index];
		}

	}
	bool find(const T& val)
	{
		for (int i = 0; i <= size; i++)
		{
			if (data[i] == val)
			{
				return true;
			}
			else
				return false;
		}
		return true;
	}

	bool update(const T& val, const T& updt_val) const
	{
		for (int i = 0; i <= size; i++)
		{
			if (data[i] == val)
			{
				data[i] = updt_val;
			}
			else
				return false;
		}
		return true;
	}

	void erase(const T& val)
	{
		for (int i = 0; i <= index; i++)
		{
			if (data[i] == val)
			{
				data[i] = index;
				index--;
			}
		}
	}

	T empty() const
	{
		return index = -1;
	}

	T full() const
	{
		return index = size - 1;
	}

	T length() const
	{
		return index + 1;
	}

	void reset()
	{
		it = -1;
	}

	bool is_last()
	{
		return it == index;
	}
	bool get_next()
	{
		it = -1;
		it++;
		return data[it];
	}
};
int main()
{
	list<int> l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	//cout << " the inserted value is: " << l.insert(5);
	//cout<<l.get_insert_val();
	//cout << endl;
	cout << l.find(3);
	l.update(2, 7);
	cout << endl;

	//l.get_insert_val();
	//cout << "the insert value is: " << l.get_insert_val() << endl;

}
