// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char a[100], b[100];
	cout << "Введите строку";
	cin >> a;
	strcpy_s(b, a);

	for (int i = 0, j = strlen(a) - 1; i < strlen(b); i++, j--) {
		b[i] = a[j];
	}

	if (strcmp(a, b) == 0) {
		cout << "Строки Эквивалентны" << endl;
	}

	else {
		cout << "Строки не эквивалентны" << endl;
	}
	system("pause");
	return 0;
}
