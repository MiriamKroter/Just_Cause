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
void main()
{
	setlocale(LC_ALL, "RUS");
	int  a = 12, b = 4;
	cout << "Сумма: " << sum(a, b) << "\nРазность: " << razn(a, b) << "\nУмножение: "<< multip(a,b) << "\nДеление: "<< segm (a,b) << endl;
	system("pause");
}
