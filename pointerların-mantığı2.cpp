#include <iostream>
using namespace std;
void degerdegistir(int *ptr)
{
	*ptr =20;
	cout<<"Fonksiyon i�indeki de�er: "<<*ptr<<endl;
}
int main()
{
	setlocale(LC_ALL,"turkish");
	int a=10;
	cout<<"a de�i�kenin de�eri: "<<a<<endl;
	degerdegistir(&a);
	cout<<"a de�i�kenin yeni de�eri: "<<a<<endl;
}
