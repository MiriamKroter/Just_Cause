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
int main()
{   
	setlocale(LC_ALL, "RUS");
	int   a = 5, b = 4;

	cout << "Сумма: "<< sum(a, b)<< "\nРазность: "<< razn(a, b) << endl;
	system("pause");
}
