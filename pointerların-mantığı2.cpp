#include <iostream>
using namespace std;
void degerdegistir(int *ptr)
{
	*ptr =20;
	cout<<"Fonksiyon içindeki deðer: "<<*ptr<<endl;
}
int main()
{
	setlocale(LC_ALL,"turkish");
	int a=10;
	cout<<"a deðiþkenin deðeri: "<<a<<endl;
	degerdegistir(&a);
	cout<<"a deðiþkenin yeni deðeri: "<<a<<endl;
}
