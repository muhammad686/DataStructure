#include <iostream>
#include <regex>
#include<fstream>
using namespace std;

// Function to validate time in 24-hour format
bool isValidTime(string str)
{

	// Regex to check valid time in 24-hour format
	const regex pattern("([01]?[0-9]|2[0-3]):[0-5][0-9]");

	// If the time in 24-hour format
	// is empty return false
	if (str.empty())
	{
		return false;
	}

	// Return true if the time in 24-hour format
	// matched the ReGex
	if (regex_match(str, pattern))
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Driver Code
int main()
{
	fstream file;
	string word, t, q, filename;

	// filename of the file
	filename = "file.txt";

	// opening file
	file.open(filename.c_str());

	// Getting words from the file
	while (file >> word)
	{
	
		cout << word << endl;
	}

	string str1;
	for (int i = 0;i<10;i++)
	{
		cout << " Enter string ";
		cin >> str1;
		cout << str1 + ": " << isValidTime(str1) << endl;
	}
	
	return 0;
}