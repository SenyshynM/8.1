#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

char* Change0(char* s);
char* Change1(char* s);
char* Change2(char* s);


int main()
{
	char Str[100];
	char modstr[151]; // змінений рядок може бути в 1.5 раза більший
	cout << "Enter string:" << endl;
	cin.getline(Str, 100);

	strcpy(modstr, Str);
	Change0(modstr);
	Change1(modstr);
	Change2(modstr);

	cout << "Modified string:" << modstr << endl;


	return 0;
}

char* Change0(char* s)
{
	char* t = new char[strlen(s) * 1.5 + 1];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;

	while (p = strchr(s + pos1, 'a'))
	{
		if (s[p - s + 1] == 'a')
		{
			pos2 = p - s + 2;
			strncat(t, s + pos1, pos2 - pos1 - 2);
			strcat(t, "***");
			pos1 = pos2;

		}
		if (s[p - s + 1] != 'a')
		{
			pos2 = p - s + 1;
			strncat(t, s + pos1, pos2 - pos1);
			pos1 = pos2;
		}
	}

	strcat(t, s + pos1);
	strcpy(s, t);

	return t;
}

char* Change1(char* s)
{
	char* t = new char[strlen(s) * 1.5 + 1];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;

	while (p = strchr(s + pos1, 'b'))
	{
		if (s[p - s + 1] == 'b')
		{
			pos2 = p - s + 2;
			strncat(t, s + pos1, pos2 - pos1 - 2);
			strcat(t, "***");
			pos1 = pos2;

		}
		if (s[p - s + 1] != 'b')
		{
			pos2 = p - s + 1;
			strncat(t, s + pos1, pos2 - pos1);
			pos1 = pos2;
		}
	}

	strcat(t, s + pos1);
	strcpy(s, t);

	return t;
}

char* Change2(char* s)
{
	char* t = new char[strlen(s) * 1.5 + 1];
	char* p;
	int pos1 = 0,
		pos2 = 0;
	*t = 0;

	while (p = strchr(s + pos1, 'c'))
	{
		if (s[p - s + 1] == 'c')
		{
			pos2 = p - s + 2;
			strncat(t, s + pos1, pos2 - pos1 - 2);
			strcat(t, "***");
			pos1 = pos2;

		}
		if (s[p - s + 1] != 'c')
		{
			pos2 = p - s + 1;
			strncat(t, s + pos1, pos2 - pos1);
			pos1 = pos2;
		}
	}

	strcat(t, s + pos1);
	strcpy(s, t);

	return t;
}