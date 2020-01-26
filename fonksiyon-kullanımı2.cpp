#include <iostream>
using namespace std;
void factorial(int sayi)
{
	int faktoriyal=1;
	for(int i=2;i<=sayi;i++)
	{
		faktoriyal*=i;
	}
	cout<<"Faktoriyel: "<<faktoriyal<<endl;
}
int main()
{
	setlocale(LC_ALL,"turkish");
	int sayi;
	cout<<"Sayýyý giriniz:";
	cin>>sayi;
	factorial(sayi);
}
