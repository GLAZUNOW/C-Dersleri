#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int x,y;
	cout<<"1. Say�y� Gir : ";
	cin >> x;
	cout<<"2. Say�y� Gir : ";
	cin >> y;
	cout<<"B�l�m : "<<x/y<<endl;
	cout<<"Kalan : "<<x%y;
	return 0;
}

