
#include "stdafx.h"
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int i, n, sum = 0;
	cout << "¬веди мен€ полностью, € n: ";
	cin >> n;
	for (i = 1; i < n + 1; i++)
		if (i % 2 == 0) sum += i;
	cout << "—умма всех четных чисел равна:bbbbbbbbbbbbbbbb" << sum << endl;
	system("pause");
}