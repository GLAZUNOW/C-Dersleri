#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"Turkish");
	int x,y;
	cout<<"1. Sayýyý Gir : ";
	cin >> x;
	cout<<"2. Sayýyý Gir : ";
	cin >> y;
	cout<<"Bölüm : "<<x/y<<endl;
	cout<<"Kalan : "<<x%y;
	return 0;
}

