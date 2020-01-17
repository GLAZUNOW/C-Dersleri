#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL,"turkish");
//	int matris[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//	int matris[3][3];

/*	cout<<matris[0][1]<<endl;
	cout<<matris[2][2]<<endl;
	cout<<matris[1][1]<<endl;*/
	
/*	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matris[i][j]<<" ";
		}
		cout<<endl;
	}*/
	int matris[3][3];
	cout<<"Matris Deðerlerini Giriniz:"<<endl;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>matris[i][j];
		}
	}
	cout <<"Matris :"<<endl;
	for (int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<matris[i][j]<<" ";
		}
		cout<<endl;
	}
}
