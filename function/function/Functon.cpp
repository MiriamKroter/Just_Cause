#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}
int razn(int a, int b)
{
	return a - b;
}

int multip(int a, int b)
{
	int c=0;
	for (int i = 0; i < b; i++) c = sum(c,a);
	return c;
}
int segm(int a, int b)
{  
	int c=0;
	while (a > 0)
	{
		a = razn(a,b);
		c++;
	}
		return c;
}

int summ(int a)
{
	if (a == 0) 
		return 0;
	else return  a + summ(a - 1);
}

int fact(int a) {
	if (a == 0)
		return 1;
	else return a * fact(a - 1);
}

int fib(int a) {
	if (a <= 2)
		return 1;
	else return fib(a - 1) + fib(a - 2);
}

void main()
{
	setlocale(LC_ALL, "RUS");
	int  a = 12, b = 4;
	cout << "Сумма: " << sum(a, b) << "\nРазность: " << razn(a, b) << "\nУмножение: " << multip(a, b) << endl;
	cout << "Деление: " << segm(a, b) << "\nСумма чисел от 1 до N (рекурсия): " << summ(a) << endl;
	cout << "n!+4*F(n)=" << sum(fact(b), multip(4, fib(b))) << endl;
	system("pause");
}
