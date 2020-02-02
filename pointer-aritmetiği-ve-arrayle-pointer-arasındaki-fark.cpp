#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL,"turkish");
	int array[]={1,2,3,4};
/*	cout<<array<<endl;
	cout<<array+1<<endl;
	cout<<array+2<<endl;*/
	int *ptr=array;
	cout<<ptr<<endl;
	ptr=ptr+1;
	cout<<"Pointerin yeni deðeri: "<<ptr<<endl;
	//cout<<ptr+1<<endl;
}
