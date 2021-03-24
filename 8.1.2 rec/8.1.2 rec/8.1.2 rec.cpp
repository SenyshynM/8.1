#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
char* Change(char* dest, const char* s, char* t, int i);

int main()
{
	char s[101];


	cout << "Enter string:" << endl;
	cin.getline(s, 100);

	char* s1 = new char[151]; // tmp
	s1[0] = '\0';

	char* dest2;
	dest2 = Change(s1, s, s1, 0);

	cout << endl;
	cout << "string : " << s << endl;
	cout << "Modified string : " << dest2 << endl;

	return 0;
}

char* Change(char* dest, const char* s, char* t, int i)
{
	if (s[i + 1] != 0)
	{
		if ((s[i] == 'a' && s[i + 1] == 'a') || (s[i] == 'b' && s[i + 1] == 'b') || (s[i] == 'c' && s[i + 1] == 'c'))
		{
			strcat(t, "***");
			return Change(dest, s, t + 3, i + 2);
		}
		else
		{
			*t++ = s[i++];
			*t = '\0';
			return Change(dest, s, t, i);
		}
	}
	else
	{
		*t++ = s[i++];
		*t++ = s[i++];
		*t = '\0';
		return dest;
	}
}

