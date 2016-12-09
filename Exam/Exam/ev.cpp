#include <iostream>
#include <cstring>

using namespace std;

void main() 
{
	char a[] = "geroin",b[] = "cocain",c[] = "narkoman",d[20]="",e[100]="",ps1[10]="",ps2[10]="",ps3[10]="",ps4[10]="",ps5[10]="",ps6[10]="";
	int dlina_c=strlen(c);
	strncat(d,c+1,2);
	strncat(ps1,a+1,4);
	strncat(ps2,b,3);
	strncat(ps3,c+4,dlina_c-4);
	strcat(d,ps1);
	strcat(d,ps2);
	strcat(d,ps3);
	cout << "stroka d - " << d << endl;
	strncat(e,a,1);
	strncat(ps4,b+1,3);
	strncat(ps5,b+2,3);
	strncat(ps6,c+3,dlina_c-3);
	strcat(e,ps4);
	strcat(e,d);
	strcat(e,ps5);
	strcat(e,ps6);
	cout << "stroka e - " << e << endl;
		system("pause");
}