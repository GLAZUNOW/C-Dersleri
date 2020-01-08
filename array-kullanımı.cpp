#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"turkish");
	/*int array[3];
	
	array[0]=10;
	array[1]=20;
	array[2]=30;
	
	cout<<"0.index :"<<array[0]<<endl;
	cout<<"1.index :"<<array[1]<<endl;
	cout<<"2.index :"<<array[2]<<endl;	*/
	
	//int array[]={10,20,30,40};
	
    /*double array2[]={1,2,3,4,5,6,7,6};
	for (int i=0;i<4;i++)
	{
		cout<<i<<".index değeri: "<<array2[i]<<endl;
	}*/
	string array3[4];
	for (int i=0;i<4;i++)
	{
		cin>>array3[i];
	}
	for (int i=0;i<4;i++)
	{
		cout<<i<<".index değeri: "<<array3[i]<<endl;
	}
}
