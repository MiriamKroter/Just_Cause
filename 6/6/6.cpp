
#include "stdafx.h"
#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "RUS");
	int i, n, sum = 0;
	cout << "Введи меня полностью, я n: ";
	cin >> n;
	for (i = 1; i < n + 1; i++)
		if (i % 2 == 0) sum += i;
	cout << "Сумма всех четных чисел равна: " << sum << endl;
	system("pause");
}