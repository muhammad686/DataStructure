//#include <iostream>
//#include <fstream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	ifstream fin;
//	int secret;
//	fin.open("data.bin", ios::binary);
//	if (fin.is_open())
//	{
//		fin.read((char*)&secret, sizeof(int));
//		cout << " secret number is: " << secret << endl;
//		fin.close();
//	}
//	else {
//		ofstream fout;
//		fout.open("data.bin", ios::binary);
//		cout << "enter the secret number: ";
//		cin >> secret;
//		fout.write((const char*)&secret, sizeof(int));
//		fout.close();
//
//	}
//
//
//	return 0;
//}