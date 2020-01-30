#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"turkish");
	int a=5 ;	
	int *ptr=&a;
	cout<<"Deðiþkenin Adresi: "<<&a<<endl;
	cout<<"Deðiþkenin Adresi: "<<ptr<<endl;
	
	cout<<"Deðiþkenin Deðeri: "<<*ptr<<endl;
	*ptr=6;
	cout<<"Deðiþkenin Deðeri: "<<a<<endl;
}
