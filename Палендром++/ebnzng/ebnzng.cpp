// ConsoleApplication1.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	char a[100], b[100];
	cout << "������� ������";
	cin >> a;
	strcpy_s(b, a);

	for (int i = 0, j = strlen(a) - 1; i < strlen(b); i++, j--) {
		b[i] = a[j];
	}

	if (strcmp(a, b) == 0) {
		cout << "������ ������������" << endl;
	}

	else {
		cout << "������ �� ������������" << endl;
	}
	system("pause");
	return 0;
}
