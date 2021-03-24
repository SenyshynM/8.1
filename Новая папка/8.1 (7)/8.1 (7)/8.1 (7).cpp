#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

bool Include(string s, string ss)
{
	if ( s.find(ss) != -1 )
		return true;

	return false;
}

int main()
{
	string s;

	cout << "Enter string:" << endl;
	getline(cin, s);
	cout << endl;
	string s1 = "aa", s2 = "bb", s3 = "cc"; // символи, входження яких перевіряється

	if (Include(s, s1) || Include(s, s2) || Include(s, s3)) // перевіряємо
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}