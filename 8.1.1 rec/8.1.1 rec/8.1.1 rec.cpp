// Lab_8_1-1.cpp
// < Сенишин Михайло >
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 10

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

bool Include(const char* s, int i)
{

	if ((s[i] == 'a' && s[i + 1] == 'a') || (s[i] == 'b' && s[i + 1] == 'b') || (s[i] == 'c' && s[i + 1] == 'c'))
		return true;

	if (s[i + 1] != '\0')
		return Include(s, i + 1);
	else
		return false;
}

int main()
{
	char s[20];


	cout << "Enter string:" << endl;
	cin.getline(s, 100);

	if (Include(s, 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}