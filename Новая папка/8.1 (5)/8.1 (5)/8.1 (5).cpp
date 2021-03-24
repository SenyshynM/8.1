#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool Include(char* s, char* ss)
{
	if (strstr(s, ss))
		return true;
	
	return false;
}

int main()
{
	char s[51];

	cout << "Enter string:" << endl;
	cin.getline(s, 50);
	cout << endl;
	char s1[] = "aa", s2[] = "bb", s3[] = "cc";

	if (Include(s, s1) || Include(s, s2) || Include(s, s3))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}