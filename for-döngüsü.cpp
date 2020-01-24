#include <iostream>
using namespace std;
 int main()
 {
 	setlocale(LC_ALL,"turkish");
 /*	//int i;
	for (int i=1;i<10 ;i++)
	{
		cout<<"i: "<<i<<endl;
	}
	*/
	int sayi,faktoriyel=1;
	cout<<"Sayý :";
	cin>>sayi;
	for (int i=1;i<=sayi;i++)
	{
		faktoriyel=faktoriyel*i;
		cout<<faktoriyel<<endl;
	}
	cout<<"Faktöriyel: "<<faktoriyel<<endl;
 }
 
