#include <iostream>

using namespace std;

void main()
{
	float a[15], s = 0, max;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		max = a[0];
		s += a[i];
	}
	for (int i = 1; i < n; i++)
		if (a[i] > max) max = a[i];
	cout << "sum=" << s << "\nSrAr=" << s / n << "\nMax=" << max << endl;
	system("pause");
}