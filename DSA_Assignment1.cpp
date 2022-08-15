#include <iostream>
#include <string>
using namespace std;

string low(string str) {
	if (str[0] > 64 && str[0] < 91) {
		str[0] = str[0] + 32;
	}
	return str;
}

class book
{
private:
	string bn[500];
	int index;
public:
	book()
	{
		index = 0;
	}
	char getsize() 
	{
		return index;
	}
	void add(const string val)
	{
		bn[index] = val;
		index++;
	}
	bool update(const string old_bn, const string new_bn)
	{
		for (int i = 0; i < index; i++)
		{
			if (bn[i] == old_bn)
			{
				bn[i] = new_bn;
				break;
			}
			else
				return false;
		}
		return true;
	}
	bool Delete(const string b)
	{
		for (int i = 0; i < index; i++)
		{
			if (bn[i] == b)
			{
				bn[i] =bn[index-1];
				index--;
				return true;
			}
		}
		return false;
	}
	bool search(const string bname)
	{
		for (int i = 0; i < index; i++)
		{
			if (bn[i] == bname)
			{
				return true;
			}
		}
		return false;
	}
	void display() {
		for (int i = 0; i < index; i++) {
			if(bn[i]!="0")
				cout << "Book " << i+1 << ": " << bn[i] << endl;
		}
	}

	
};
class library
{
private:
	book barray[26];
	int index;
public:
	library()
	{
		index = -1;
	}
	void addbook()
	{
		cout << "Enter book name to add: ";
		string name_;
		cin >> name_;
		string name = low(name_);
		char ch = name[0];
		int ind = ch - 97;
		barray[ind].add(name_);
	}

	void update()
	{
		cout << "Enter old book name: ";
		string name, name2;
		cin >> name;
		cout << "Enter new book name: ";
		cin >> name2;
		string name_ = low(name);
		char ch = name_[0];
		int ind = ch - 97;
		if (name[0] == name2[0]) {
			if (barray[ind].update(name, name2))
				cout << "Book updated!\n";
			else
				cout << "Book not found!\n";
		}
		else {
			barray[ind].Delete(name);
			string _name_ = low(name2);
			char ch = _name_[0];
			int ind2 = ch - 97;
			barray[ind2].add(name2);
		}
	}
	void Search()
	{
		cout << "Enter book name to search: ";
		string name_;
		cin >> name_;
		string name = low(name_);
		char ch = name[0];
		int ind = ch - 97;
		if (barray[ind].search(name_))
			cout << "Book found!\n";
		else
			cout << "Book not found!\n";
	}
	
	void Delete() {
		cout << "Enter book name to be deleted: ";
		string name_;
		cin >> name_;
		string name = low(name_);
		char ch = name[0];
		int ind = ch - 97;
		if (barray[ind].Delete(name_))
			cout << "Book deleted!\n";
		else
			cout << "Book not found!\n";
	}

	void Display() {
		for (int i = 0; i < 26; i++) {
			int c = 97 + i;
			char ch = char(c);
			if (barray[i].getsize() != 0) {
				cout << "\n\nBooks starting with \'" << ch << "\':\n";
				barray[i].display();
			}
		}
	}
};
int	main()
{
	cout << "\t\t\t--------------------------------------------" << endl;
	cout << "\t\t\t------------LIBRARY MANAGEMENT SYSTEM-------" << endl;
	cout << "\t\t\t--------------------------------------------" << endl;

	library obj;
	int op;
	char ch = 'N';
	while (ch == 'Y' || ch == 'y') {
		cout << "1- ADD BOOK" << endl;
		cout << "2- SEARCH BOOK" << endl;
		cout << "3- UPDATE BOOK" << endl;
		cout << "4- DELETE BOOK" << endl;
		cout << "5- DISPLAY BOOK" << endl;
		cout << "Enter an option: ";
		cin >> op;
		switch (op) {
		case 1: obj.addbook(); break;
		case 2: obj.Search(); break;
		case 3: obj.update(); break;
		case 4: obj.Delete(); break;
		case 5: obj.Display(); break;
		default: cout << "Wrong choice!\n";
		}

		cout << "Do you want to continue? (Y/N): ";
		cin >> ch;
	}
}