#include <iostream>
using namespace std;

void main() 
{
	int i, j, n, m, sum, a[15][15], mult;
	cout << "n=";
	cin >> n;
	cout << "m=";
	cin >> m;
	for (i = 0; i < n; i++)
	{
		sum = 0;
		cout << "\na[" << i + 1 << "]=";
		for (j = 0; j < m; j++)
		{
			cin >> a[i][j];
			sum += a[i][j];
		}
		cout << sum << endl;
	}
	for (j = 0; j < m; j++)
	{
		mult = 1;
		for (i = 0; i < n; i++)
			mult *= a[i][j];
		cout << mult << " ";
	}
	system("pause");
}
