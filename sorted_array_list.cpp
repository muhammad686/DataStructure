//#include <iostream>
//
//using namespace std;
//
//template <typename T>
//class list_array
//{
//private:
//	T* data;
//	int size, index, it;
//
//	/*T find_indx(const T &val)
//	{
//		for (int i = 0; i <= index; i++)
//		{
//			if (data[i] == val)
//			{
//				return i;
//			}
//		}
//		return -1;
//	}*/
//public:
//	list_array(int s = 20)
//	{
//		size = s;
//		data = new T[size];
//		index = -1;
//		it = -1;
//	}
//	~list_array()
//	{
//		delete[] data;
//	}
//
//	void insert(const T& val)
//	{
//		int i, j;
//		for (i = 0; i <= index; i++)
//		{
//			if (val < data[i])
//			{
//				break;
//			}
//		}
//		for (j = index + 1; j > i; j--)
//		{
//			data[j] = data[j - 1];
//		}
//		data[j] = val; //data[i]=val;
//		index++;
//
//	}
//
//	bool find(const T& val) const
//	{
//		int start, mid, end;
//		start = 0;
//		end = index;
//		mid = (start + end) / 2;
//		//o(n)
//		//omega(1)
//		while (start <= end)
//		{
//			if (val < data[mid])
//			{
//				end = mid - 1;
//			}
//			else
//				if (val > data[mid])
//				{
//					start = mid + 1;
//				}
//				else
//				{
//					return true;
//				}
//		}
//
//	}
//	bool erase(const T& val)
//	{
//		int i, j;
//		for (i = 0; i < index; i++)
//		{
//			if (data[i] = val)
//				break;
//		}
//		if (i > index)
//		{
//			return false;
//		}
//		for (j = i; j < index; j++)
//		{
//			data[j] = data[j + 1];
//		}
//		/*alternate
//		for (j = i+1; j < n; j++)
//		{
//			data[j-1] = data[j];
//		}*/
//
//	}
//	bool update(const T& val, const T& updt_val) const
//	{
//		for (int i = 0; i <= index; i++)
//		{
//			if (data[i] == val)
//			{
//				data[i] = updt_val;
//			}
//			else
//				return false;
//		}
//		return true;
//	}
//		
//	T empty() const
//	{
//		return index = -1;
//	}
//		
//	T full() const
//	{
//		return index = size - 1;
//	}
//		
//	T length() const
//	{
//		return index + 1;
//	}
//		
//	void reset()
//	{
//		it = -1;
//	}
//		
//	bool is_last()
//	{
//		return it == index;
//	}
//	bool get_next()
//	{
//		it = -1;
//		it++;
//		return data[it];
//	}
//
//};
//
////template <typename T>
////
////void display(list_array<T>& l)
////{
////	l.reset();
////	while (!l.is_last())
////	{
////		T val = l.get_next();
////		cout << " " << val;
////	}
////	cout << endl;
////}
//
//int main()
//{
//	list_array<char> l;
//	l.insert('F');
//	l.insert('B');
//	l.insert('D');
//	l.insert('E');
//	l.insert('C');
//	l.insert('A');
//	//display<char>(l);
//	l.update('D', 'H');
//	//display<char>(l);
//	l.get_next();
//	cout << l.get_next();
//
//
//
//}