#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"turkish");
	int *ptr;
	int size;
	cout<<"Ka� de�er saklayacaks�n�z: ";
	cin>>size;
	ptr=new int[size];
	for (int i=0;i<size;i++)
	{
		cout<<"De�er: ";
		cin>>ptr[i];
	}
	for(int i=0;i<size;i++)
	{
		cout<<"Eleman: "<<ptr[i]<<endl;
	}
	delete [] ptr;
}
