#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"turkish");
	int a=5 ;	
	int *ptr=&a;
	cout<<"De�i�kenin Adresi: "<<&a<<endl;
	cout<<"De�i�kenin Adresi: "<<ptr<<endl;
	
	cout<<"De�i�kenin De�eri: "<<*ptr<<endl;
	*ptr=6;
	cout<<"De�i�kenin De�eri: "<<a<<endl;
}
