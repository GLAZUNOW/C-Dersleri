#include <iostream>
using namespace std;
void degerdegistir(int af)
{
	af=20;
	cout<<"Fonksiyon i�indeki de�er : "<<af<<endl;
}
int main()
{
	setlocale(LC_ALL,"turkish");
	int a=10;
	cout<<"a de�i�kenin de�eri: "<<a<<endl;
	degerdegistir(a);
	cout<<"Fonksiyon bittikten sonra a de�i�kenin de�eri: "<<a<<endl;
}
