// варіант 10

#include <iostream>
#include <string>

using namespace std;

string Change(string& s);

int main()
{
	string s;
	cout << "Enter string:" << endl;
	getline(cin, s);

	Change(s);

	cout << "Modified string:" << s << endl;

	return 0;
}

string Change(string& s)
{
	size_t pos = 0;

	while ((pos = s.find('a', pos)) != -1)
	{
		if (s[pos + 1] == 'a')
			s.replace(pos, 2, "***");

		if (s[pos + 1] != 'a')
			pos++;

	}

	pos = 0;

	while ((pos = s.find('b', pos)) != -1)
	{
		if (s[pos + 1] == 'b')
			s.replace(pos, 2, "***");

		if (s[pos + 1] != 'b')
			pos++;

	}

	pos = 0;

	while ((pos = s.find('c', pos)) != -1)
	{
		if (s[pos + 1] == 'c')
			s.replace(pos, 2, "***");

		if (s[pos + 1] != 'c')
			pos++;

	}

	return s;
}

