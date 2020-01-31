#include <iostream>
using namespace std;
void degerdegistir(int af)
{
	af=20;
	cout<<"Fonksiyon içindeki değer : "<<af<<endl;
}
int main()
{
	setlocale(LC_ALL,"turkish");
	int a=10;
	cout<<"a değişkenin değeri: "<<a<<endl;
	degerdegistir(a);
	cout<<"Fonksiyon bittikten sonra a değişkenin değeri: "<<a<<endl;
}
