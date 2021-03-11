// Lab_8_1-1.cpp
// < Сенишина Михайла >
// Лабораторна робота № 8.1
// Пошук та заміна символів у літерному рядку
// Варіант 10

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

bool Include(const char* s);

int main()
{
	char s[101];


	cout << "Enter string:" << endl;
	cin.getline(s, 100);

	if (Include(s))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}

bool Include(const char* s)
{

	for (int j = 0; s[j + 1] != '\0'; j++)
		if ((s[j] == 'a' && s[j + 1] == 'a') || (s[j] == 'b' && s[j + 1] == 'b') || (s[j] == 'c' && s[j + 1] == 'c'))
			return true;

	return false;
}

