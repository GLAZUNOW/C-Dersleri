#include <iostream>
using namespace std;
void degerDegistir(int &ref)
{
	ref=20;
}
int main()
{
	setlocale(LC_ALL,"turkish");
	int a=10;
/*	int &ref=a;
	ref++;*/
	cout<<"a'nýn deðeri: "<<a<<endl;
	degerDegistir(a);
	cout<<"a'nýn yeni deðeri: "<<a<<endl;
}
