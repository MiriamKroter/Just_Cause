#include <iostream>
#include <cstring>
using namespace std;
void main()
{ 
	setlocale(LC_ALL, "RUS");
	char *a = new char[10];
	char *b = new char[10];
	char *c = new char[10];
	int k = 0, n = 0;
	cout << "������ a: ";
	scanf("%s", a);
	cout << "������ b: ";
	scanf("%s", b);
	cout << "������ �: ";
	scanf("%s", c);
	cout << strcat(a, b) << endl;
	char *R = strstr(a, c);
	while (R != NULL) {
		n = R - a;
		R = strstr(a + n + 1, c);
		k++;
	}
	cout << "���-�� ��������� ������ '�' � ������������ ������ 'a' � 'b' �����: " << k << endl;
	system("pause");
}