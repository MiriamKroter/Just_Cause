#include <iostream>
using namespace std;

int main()
{
	int i, n = 6, j = 0, a[3] = { 1,2,3 }, b[3] = { 7,8,9 }, c[6];
	for (i = 0; i < n; i++)
	{
		if (i % 2 == 0) c[i] = a[j];
		else
		{
			c[i] = b[j];
			j++;
		}
	}
	for (i = 0; i < n; i++)
		cout << c[i] <<" ";
	system("pause");
}